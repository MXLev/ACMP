//
// Created by Beast on 18.02.2022.
// https://acmp.ru/index.asp?main=task&id_task=13

#include <iostream>

using namespace std;

int main(){
    string input1;
    string input2;
    cin >> input1 >> input2;
    if (input1 == input2){
        cout << 4 << ' ' << 0;
        return 0;
    }
    int cows = 0, bulls = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (input2[i] == input1[j] && i == j){
                bulls++;
            } else if (input2[i] == input1[j]){
                cows++;
            }
        }
    }
    cout << bulls << ' ' << cows;
}