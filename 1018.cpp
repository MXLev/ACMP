//
// Created by Beast on 24.09.2022.
// https://timus.online/problem.aspx?space=1&num=1018

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> arr;
vector<vector<int>> dp;

int calc(int h, int k){
    int l = 0, r = 0;
    if (dp[h][k] == -1){
        return dp[h][k];
    }
    if (k == 0){
        return dp[h][k] = 0;
    }
    dp[h][k] = max(calc(l, k - 1) +  arr[h][k], calc(r, k - 1) + arr[h][r]);
    for (int i = 0; i < k - 2; ++i) {
        dp[h][k] = max(dp[h][k] + arr[h][k], arr[h][l] + arr[h][r] + calc(l, k - 2 - i) + calc(r, i));
    }
    return dp[h][k];
}

int main() {
    int n, q;
    cin >> n >> q;
    arr.assign(n, vector<int> (n));
    dp.assign(n, vector<int> (n, -1));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
}