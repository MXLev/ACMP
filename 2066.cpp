//
// Created by Beast on 10.09.2022.
// https://timus.online/problem.aspx?space=1&num=2066

#include <iostream>
#include <vector>


using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b <= 1 || c <= 1){
        cout << a - b - c;
    } else {
        cout << a - b * c;
    }
}