//
// Created by Beast on 20.05.2022.
// https://acm.timus.ru/problem.aspx?space=1&num=1028

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

vector<ll> a(32001, 0);
vector<ll> s(32001, 0);

void update(int index, ll add, int n) {
    a[index] += add;
    for (; index < n; index |= index + 1) s[index] += add;
}

ll prefix_sum(int r) {
    ll result = 0;
    for (; r >= 0; r = (r & (r + 1)) - 1) result += s[r];
    return result;
}


int main(){
    int n;
    a.assign(n, 0);
    s.assign(n, 0);
    vector<pair<int, int>> answ(n);
    for (int i = 0; i < n; ++i) {
        int x1, y1;
        cin >> x1 >> y1;
        update(x1, 1, 32001);
        answ[i].first = prefix_sum(x1);
    }
    sort(answ.begin(), answ.end());
    int sum = 0, lastNum = answ[0];
    for (int i = 0; i < n; ++i) {
        if (lastNum == answ[i]){
            sum++;
        } else {
            cout << sum << '\n';
            lastNum = answ[i];
        }
    }
}