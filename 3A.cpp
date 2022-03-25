//
// Created by Beast on 18.03.2022.
// https://informatics.msk.ru/mod/statements/view.php?id=1966&forceview=1#1

#include <iostream>

using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int left = 0, right = max(w * n, h * n) - 1;
    //n <= l / h * l / w
    while (right - left > 1){

    }
}