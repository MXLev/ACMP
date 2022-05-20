//
// Created by Beast on 20.05.2022.
// https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=20&id_topic=46&id_problem=288

#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<ll> a;
vector<ll> s;

void update(int index, ll add, int n) {
    a[index] += add;
    for (; index < n; index |= index + 1) s[index] += add;
}

ll prefix_sum(int r) {
    int result = 0;
    for (; r >= 0; r = r & (r + 1) - 1) result += s[r];
    return result;
}

ll sum_per_line(int l, int r) {
    if (l == 0) return prefix_sum(r);
    return prefix_sum(r) - prefix_sum(l - 1);
}

int main(){
    int n, m;
    cin >> n >> m;
    a.assign(n, 0);
    s.assign(n, 0);
    while (m--) {
        string z;
        cin >> z;
        if (z == "add") {
            int x;
            ll y;
            cin >> x >> y;
            update(x - 1, y, n);
        }
        if (z == "rsq"){
            int l;
            int r;
            cin >> l >> r;
            cout << sum_per_line(l - 1, r - 1) << '\n';
        }
    }

}