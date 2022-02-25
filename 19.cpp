//
// Created by Beast on 18.02.2022.
// https://acmp.ru/index.asp?main=task&id_task=19

#include <iostream>
#include <vector>

using namespace std;

int main(){
    string p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    pair<int, int> p1_pos;
    p1_pos.first = p1[0] - 'A';
    p1_pos.second = p1[1] - 49;
    pair<int, int> p2_pos;
    p2_pos.first = p2[0] - 'A';
    p2_pos.second = p2[1] - 49;
    pair<int, int> p3_pos;
    p3_pos.first = p3[0] - 'A';
    p3_pos.second = p3[1] - 49;
    vector<vector<int>> arr(8, vector<int> (8, 1));
    // ладья
    for (int i = 0; i < 8; ++i) {
        arr[p2_pos.second][i] = 0;
    }
    for (int i = 0; i < 8; ++i) {
        arr[i][p2_pos.first] = 0;
    }

    // ферзь
    //вертикаль
    for (int i = 0; i < 8; ++i) {
        arr[p1_pos.second][i] = 0;
    }
    for (int i = 0; i < 8; ++i) {
        arr[i][p1_pos.first] = 0;
    }
    //диагональ
    for (int i = p1_pos.second, j = p1_pos.first; i < 8 && j < 8; i++, j++) { // ЛЕВО ВЕРХ
            arr[i][j] = 0;
    }
    for (int i = p1_pos.second, j = p1_pos.first; i >= 0 && j >= 0; i--, j--) { // право низ
        arr[i][j] = 0;
    }
    for (int i = p1_pos.second, j = p1_pos.first; i < 8 && j >= 0; i++, j--) { // право верх
        arr[i][j] = 0;
    }
    for (int i = p1_pos.second, j = p1_pos.first; i >= 0 && j < 8; i--, j++) { // лево низ
        arr[i][j] = 0;
    }
    // конь
    if (p3_pos.first > 1){
        if (p3_pos.second < 7){
            arr[p3_pos.second + 1][p3_pos.first - 2] = 0;
        }
        if (p3_pos.second > 0){
            arr[p3_pos.second - 1][p3_pos.first - 2] = 0;
        }
    }
    if (p3_pos.first > 0){
        if (p3_pos.second < 6){
            arr[p3_pos.second + 2][p3_pos.first - 1] = 0;
        }
        if (p3_pos.second > 1){
            arr[p3_pos.second - 2][p3_pos.first - 1] = 0;
        }
    }
    if (p3_pos.first < 6){
        if (p3_pos.second < 7){
            arr[p3_pos.second + 1][p3_pos.first + 2] = 0;
        }
        if (p3_pos.second > 0){
            arr[p3_pos.second - 1][p3_pos.first + 2] = 0;
        }
    }
    if (p3_pos.first < 7){
        if (p3_pos.second < 6){
            arr[p3_pos.second + 2][p3_pos.first + 1] = 0;
        }
        if (p3_pos.second > 1){
            arr[p3_pos.second - 2][p3_pos.first + 1] = 0;
        }
    }
    arr[p1_pos.second][p1_pos.first] = 2;
    arr[p2_pos.second][p2_pos.first] = 3;
    arr[p3_pos.second][p3_pos.first] = 4;

//    for (int i = 7; i >= 0; --i) {
//        for (int j = 0; j < 8; ++j) {
//            cout << arr[i][j] << ' ';
//        }
//        cout << '\n';
//    }
    int answ = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (arr[i][j] == 0){
                answ++;
            }
        }
    }
    cout << answ;
}
