//
// https://acmp.ru/index.asp?main=task&id_task=63
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<char>> arr(3, vector<char> (3));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }
    // первое столбцы второе строчки
    if (arr[0][0] == arr[0][1] && arr[0][0] != '.'){ // горизонталь 1
        if (arr[0][1] == arr[0][2]){
            if (arr[0][0] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[1][0] == arr[1][1]&& arr[1][0] != '.'){ // горизонталь 2
        if (arr[1][1] == arr[1][2]){
            if (arr[1][0] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[2][0] == arr[2][1] && arr[2][0] != '.'){ // горизонталь 3
        if (arr[2][1] == arr[2][2]){
            if (arr[2][0] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[0][0] == arr[1][0]&& arr[0][0] != '.'){ // вертикаль 1
        if (arr[1][0] == arr[2][0]){
            if (arr[0][0] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[0][1] == arr[1][1] && arr[0][1] != '.'){ // вертикаль 2
        if (arr[1][1] == arr[2][1]){
            if (arr[0][1] == 'X'){
                cout << "Win";
                return 0;

            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[0][2] == arr[1][2] && arr[0][2] != '.'){ // вертикаль 3
        if (arr[2][1] == arr[2][2]){
            if (arr[0][2] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[0][0] == arr[1][1] && arr[0][0] != '.'){ // диагональ 1
        if (arr[1][1] == arr[2][2]){
            if (arr[0][0] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    if (arr[2][0] == arr[1][1] && arr[2][0] != '.'){ // диагональ 2
        if (arr[1][1] == arr[0][2]){
            if (arr[2][0] == 'X'){
                cout << "Win";
                return 0;
            } else {
                cout << "Lose";
                return 0;
            }
        }
    }
    cout << "Draw";
}