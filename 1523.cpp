//
// Created by Beast on 18.06.2023.
// https://timus.online/problem.aspx?space=1&num=1523

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <map>

using namespace std;

typedef long long ll;

int n;
vector<ll> tree(1e6);

/// 1 2 3 4 5 .. n
/// 0 1 2 3 4 ... n - 1
/// n n-1 n-2 n-3 ... 2 1

void upd(int t) {
    for (; t < n; t = t | (t + 1)) tree[t]++; /// заединичиваем последний ноль в двоичной записи
}

ll sum(int t) { ///сумма на префиксе
    ll answ = 0;
    for (; t >= 0; t = (t & (t + 1)) - 1) answ += tree[t]; /// зануление суффикса из единиц в двоичной записи
    return answ;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >>arr[i];
    }
    vector<bool> res(n);
    int answ = 0;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < n; ++j) {
            answ += sum(n - arr[j]);
            /*for (int j = 0; j < arr[j]; ++j) {
                if (res[j]){
                    arr[j]++;
                }
            }*/
            upd(n - arr[j]);
            ///res[arr[j]] = true;
        }
    }
    cout << answ;
}