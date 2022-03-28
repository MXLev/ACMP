//
// Created by Beast on 18.03.2022.
// https://informatics.msk.ru/mod/statements/view.php?id=1966&forceview=1#1

#include <iostream>

using namespace std;

typedef long long ll;

ll w, h, n;

bool calculate(ll x){
    return n <= x / h * x / w;
}

int main() {
    cin >> w >> h >> n;
    ll left = 0, right = (ll)1e18 + 100;
    while (right - left > 1){
        ll x = (right + left) >> 1;
        if (calculate(x)){
            right = x;
        } else {
            left = x;
        }
    }
    cout << right;
}