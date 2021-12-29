//
// https://acmp.ru/index.asp?main=task&id_task=338
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
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    vector<int> colours(n);
    for (int i = 0; i < n; ++i) {
        cin >> colours[i];
    }
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == 1 && colours[i] != colours[j]){
                counter++;
            }
        }
    }
    cout << counter / 2;
}