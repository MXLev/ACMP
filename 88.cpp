//
// Created by Beast on 04.03.2022.
// https://acmp.ru/index.asp?main=task&id_task=88

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n * n, vector<int> (n * n));
    for (int i = 0; i < n * n; ++i) {
        for (int j = 0; j < n * n; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n * n; ++i) {
        sort(arr[i].begin(), arr[i].end());
        for (int j = 0, k = 1; j < n * n; ++j, k++) {
            if (arr[i][j] != k){
                cout << "Incorrect";
                return 0;
            }
        }
    }
    cout << "Correct";
}