//
// Created by Beast on 06.05.2023.
//https://timus.online/problem.aspx?space=1&num=2063

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <ctime>

using namespace std;
typedef long double ld;

int main(){
    srand( time( 0 ));
    int n;
    cin >> n;
    for (int i = 2; i <= n + 1; ++i) {
        if (rand() % 2){
            for (int j = 1; j < i; ++j) {
             cout << "? " << j << ' ' << j + 1 << endl;
            }
            for (int j = 1; j < i; ++j) {
                cout << "? " << j << ' ' << j + 1 << endl;
            }
            cout << "! " << i - 1 << ' ' << i << endl;
        } else {
            for (int j = i; j > 1; --j) {
                cout << "? " << j << ' ' << j - 1 << endl;
            }
            for (int j = i; j > 1; --j) {
                cout << "? " << j << ' ' << j - 1 << endl;
            }
            cout << "! " << 1 << ' ' << 2 << endl;
        }
    }
}