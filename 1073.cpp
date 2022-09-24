//
// Created by Beast on 10.09.2022.
// https://timus.online/problem.aspx?space=1&num=1073

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> s;
    vector<ll> dp(n + 1, 10e9+666);

    for (int i = 0; i * i <= n; ++i) {
        s.push_back(i * i);
        dp[i * i] = 1;
    }

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 0; j < s.size(); ++j) {
            if (i + s[j] <= n){
                dp[i + s[j]] = min(dp[i] + 1, dp[i + s[j]]);
            }
        }
    }
    cout << dp[n];
}