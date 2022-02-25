//
// Created by Beast on 25.02.2022.
// https://acmp.ru/index.asp?main=task&id_task=58

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int> (m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
            }
        }
        if (n < 2 || m < 2){
            cout << "YES" << '\n';
            continue;
        }
        bool flag = true;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < m - 1; ++j) {
                if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 1][j]){
                    cout << "NO" << '\n';
                    flag = false;
                    break;
                }
            }
            if (!flag){
                break;
            }
        }
        if (flag){
            cout << "YES" << '\n';
        }
    }
}