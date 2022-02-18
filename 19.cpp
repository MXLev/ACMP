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
    // ладья - 14 клеток
    // ферзь - <14
    // конь - max 8 клеток
    vector<vector<int>> arr(8, vector<int> (8, 1));
    // ладья
    for (int i = 0; i < 8; ++i) {
        arr[p2_pos.second][i] = 0;
    }
    for (int i = 0; i < 8; ++i) {
        arr[i][p2_pos.first] = 0;
    }

    // ферзь
    for (int i = 0; i < 8; ++i) {
        arr[p1_pos.second][i] = 0;
    }
    for (int i = 0; i < 8; ++i) {
        arr[i][p1_pos.first] = 0;
    }
    for (int i = p1_pos.second, j = p1_pos.first; i < 8 && j < 8; i++, j++) {
            arr[i][j] = 0;
        }
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}