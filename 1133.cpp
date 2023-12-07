//
// Created by Beast on 25.02.2023.
// https://timus.online/problem.aspx?space=1&num=1133


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long int li;

int calc(int i, int f_i, int j, int f_j, int n){
    int a = calc(i,,,n - 1), b = calc();
    n = -(a * f_i - f_j) / b;
    return n;
}

int main(){
    int i, f_i, j, f_j, n;
    cin >> i >> f_i >> j >> f_j >> n;
    cout << calc(i, f_i, j, f_j, n);
}