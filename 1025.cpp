//
// Created by Beast on 05.11.2022.
// https://timus.online/problem.aspx?space=1&num=1025

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long sum = 0;
    for (int i = 0; i < ceil(n / 2.0); ++i) {
        sum += ceil(arr[i] / 2.0);
    }
    cout << sum << "\n";
}