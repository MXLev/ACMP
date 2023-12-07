//
// Created by Beast on 22.04.2023.
//https://timus.online/problem.aspx?space=1&num=1753

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long double ld;

ld calc(ld h, ld z, ld H){
    ld k = sqrt(h*h + z*z);
    return ((0.5*H - k) * z) / k;
}

int main(){
    int h, H, l;
    cin >> h >> H >> l;
    ld l1 = 0;
    ld l4 = min(H, l);
    ld l2 = (l4 - l1) / 3;
    ld l3 = ((l4 - l1) * 2) / 3;
    for (int i = 0; i < 1e7; ++i) {
        l2 = (l4 - l1) / 3;
        l3 = ((l4 - l1) * 2) / 3;
        bool sign = calc(h, l1, H) > calc(h, l2, H);
        bool sign2 = calc(h, l2, H) > calc(h, l3, H);
        bool sign3 = calc(h, l3, H) > calc(h, l4, H);
        if (sign == sign2){
            l4 = l3;
        } else if (sign2 == sign3){
            l1 = l2;
        }
    }
    cout << max(calc(h, (l2 + l3) / 2, H), max(calc(h, l2, H), calc(h, l3, H) / 2)) << '\n';
}