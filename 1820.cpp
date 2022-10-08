//
// Created by Beast on 06.08.2022.
// https://timus.online/problem.aspx?space=1&num=1820


#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, k;
    cin >> n >> k;
    if (k > n){
        cout << 2 << '\n';
        return 0;
    }
    cout << ceil(n * 2 / k);
}