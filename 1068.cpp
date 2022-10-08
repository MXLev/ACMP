//
// Created by Beast on 08.10.2022.
// https://timus.online/problem.aspx?space=1&num=1068

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    if (n > 0){
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
    } else {
        for (int i = 1; i >= n; --i) {
            sum += i;
        }
    }
    cout << sum;
}