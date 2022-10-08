//
// Created by Beast on 08.10.2022.
//1 2 0 0 0 3 3 5 0

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<pair<long long, long long>> arr;
    int last = 0;
    for (long long i = 0; i < n; ++i) {
        int x, val;
        cin >> x >> val;
        arr.emplace_back(x, val + last);
        last = val;
    }
    sort(arr.begin(), arr.end());
    long long q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int l, r;

        int left = 0, right = arr.end();
        while (right - left > 1)
    }
}