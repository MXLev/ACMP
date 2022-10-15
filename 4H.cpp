//
// Created by Beast on 08.10.2022.
//1 2 0 0 0 3 3 5 0

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr;
    for (ll i = 0; i < n; ++i) {
        ll x, val;
        cin >> x >> val;
        if (val == 0){
            continue;
        }
        arr.emplace_back(x, val);
    }
    sort(arr.begin(), arr.end());
    int last = 0;
    for (int i = 0; i < arr.size(); ++i) {
        arr[i].second += last;
        last = arr[i].second;
    }
    ll q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        ll l, r;
        cin >> l >> r;

        ll leftL = 0, rightL = arr.size();
        while (rightL - leftL > 1){
            if (arr[(leftL + rightL) / 2].first > l) {
                rightL = (leftL + rightL) / 2;
            } else if (arr[(leftL + rightL) / 2].first < l){
                leftL = (leftL + rightL) / 2;
            } else {
                break;
            }
        }

        ll leftR = 0, rightR = arr.size();
        while (rightR - leftR > 1){
            if (arr[(leftL + rightL) / 2].first) {
                rightR = (leftL + rightL) / 2;
            } else if (arr[(leftL + rightL) / 2].first){
                leftR = (leftL + rightL) / 2;
            } else {
                break;
            }
        }
        if (rightL != n || rightR != n){
            cout << arr[leftR].second - arr[leftR].second << '\n';
        }

    }
}