//https://acmp.ru/index.asp?main=task&id_task=715

#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr_2d(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr_2d[i][j];
        }
    }
    vector<vector<char>> arr2d2(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr2d2[i][j];
        }
    }
    int errors = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr_2d[i][j] == 'W'){
                arr_2d[i][j] = 'B';
                if (arr2d2[i][j] != arr_2d[i][j]){
                    ++errors;
                }
            } else {
                arr_2d[i][j] = 'W';
                if (arr2d2[i][j] != arr_2d[i][j]){
                    ++errors;
                }
            }
        }
    }
    cout << errors;
}