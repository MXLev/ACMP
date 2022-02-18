//
// https://acmp.ru/index.asp?main=task&id_task=15
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int> (n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> answ(n, vector<int> (n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == 1){
                answ[i][i] = 1;
                answ[i][j] = 1;
            }
        }
    }
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == 1){
                counter++;
            }
        }
    }
    cout << counter / 2;
}