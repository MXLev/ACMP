//
// Created by Beast on 22.04.2022.
// https://acmp.ru/index.asp?main=task&id_task=38

///первый игрок [1 2 3 4] 5 / 5
///1. второй игрок [1 2 3] 1 / 5 + 4 / 0 = 5 / 5
///2. второй игрок [2 3 4] 3 / 6 + 1 / 0 = 4 / 6
#include <iostream>
#include <vector>

vector<int> a; //исх
vector<vector<pair<int, int>>> dp;

using namespace std;

void find(int l, int r, bool f) {
    if (dp[l][r] > 0) return;
    if (r == l) {
        if (f) dp[l][r] = {a[l], 0};
        else dp[l][r] = {0, a[l]};
        return;
    }
    ///берем левое
    find(l + 1, r, not f);
    if (f) pair<int, int> answ1 = {dp[l + 1][r].first + a[l], dp[l + 1][r].second};
    else pair<int, int> answ1 = {dp[l + 1][r].first, dp[l + 1][r].second + a[l]};
    ///берем правое
    find(l, r - 1, not f);
    if (f) pair<int, int> answ2 = {dp[l][r - 1].first + a[r], dp[l][r - 1].second};
    else pair<int, int> answ2 = {dp[l][r - 1].first, dp[l][r - 1].second + a[r]};
    if (f) {
        if (answ1.first > answ2.first) dp[l][r] = answ1;
        else dp[l][r] = answ2;
    } else {
        if (answ1.first > answ2.first) dp[l][r] = answ2;
        else dp[l][r] = answ1;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    dp.assign(n, vector<int>(n, 0));
    find(0, n - 1, true);
    if (dp[0][n - 1].first > dp[0][n - 1].second) {
        cout << 1;
    } else if (dp[0][n - 1].first < dp[0][n - 1].second){
        cout << 2;
    } else {
        cout << 0;
    }
}

