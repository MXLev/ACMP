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
    int length = n * n;
   vector<vector<int>> arr(n * n, vector<int> (n * n));
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> temp = arr;
    for (int i = 0; i < length; ++i) {
        sort(temp[i].begin(), temp[i].end());
        for (int j = 0, k = 1; j < length; ++j, k++) {
            if (temp[i][j] != k){
                cout << "Incorrect";
                return 0;
            }
        }
    }
    for (int i = 0; i < length; ++i) {
        vector<int> checker;
        for (int q = 1; q <= length; ++q) {
            checker.push_back(q);
        }
        for (int j = 0; j < length; ++j) {
            bool flag = true;
            for (int k = 0; k < length; ++k) {
                if (arr[j][i] == checker[k]){
                    flag = false;
                    checker[k] = -101;
                    break;
                }
            }
            if (flag){
                cout << "Incorrect";
                return 0;
            }
        }
    }
    cout << "Correct";
}