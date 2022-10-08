//
// Created by Beast on 06.08.2022.
// https://timus.online/problem.aspx?space=1&num=1820


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double n, k;
    cin >> n >> k;
    if (k > n){
        cout << 1 << '\n';
        return 0;
    }
    int ans = ceil(n * 2 / k);
    if (ans % 2 == 1){
        ans++;
    }
    cout << ans;
}