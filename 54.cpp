//
// Created by Beast on 25.02.2022.
// https://acmp.ru/index.asp?main=task&id_task=54

#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<int> min;
    for (int i = 0; i < n; ++i) {
        int min1 = 1001;
        for (int j = 0; j < m; ++j) {
            if (min1 > arr[i][j]){
                min1 = arr[i][j];
            }
        }
        min.push_back(min1);
    }
    vector<int> max;
    for (int j = 0; j < m; ++j) {
        int max1 = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i][j] > max1){
                max1 = arr[i][j];
            }
        }
        max.push_back(max1);
    }
    sort(max.begin(), max.end());
    sort(min.rbegin(), min.rend());
    cout << min[0] << ' ' << max[0];
}