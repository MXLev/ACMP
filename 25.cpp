//https://acmp.ru/index.asp?main=task&id_task=25

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int beans = 1;
    vector<vector<int>> arr(30,vector<int>(30,0));
    for (int i = 0; i < 30; ++i) {
        for (int j = 0; j < 30; j++) {
            arr[i][j] += beans;
            if (arr[i][j + 1] > 0){
                continue;
            }
            i++;
        }
    }
    int counter = 0;
    for (int i = 0; i < 30; ++i) {
        for (int j = 0; j < 30; ++j) {
            if (arr[i][j] == 4096){
                counter++;
            }
        }
    }
    cout << counter;
}
