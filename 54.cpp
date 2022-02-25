//
// Created by Beast on 25.02.2022.
// https://acmp.ru/index.asp?main=task&id_task=54

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int> (m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    int max, min =
}