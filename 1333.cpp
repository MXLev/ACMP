//
// Created by Beast on 26.04.2023.
//https://timus.online/problem.aspx?space=1&num=1333

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <ctime>

using namespace std;
typedef long double ld;



int main(){
    mt19937 gen(time(0));
    uniform_real_distribution<double> dist(0.0, 1.0);
    int n;
    cin >> n;
    vector<vector<ld>> arr(n, vector<ld> (3));
    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int answ = 0;
    for (int i = 0; i < 1e6; ++i) {
        ld xp = dist(gen);
        ld yp = dist(gen);
        for (int j = 0; j < n; ++j) {
            if (sqrt((xp - arr[j][0]) * (xp - arr[j][0]) + (yp - arr[j][1]) * (yp - arr[j][1])) <= arr[j][2]){
                answ++;
                break;
            }
        }
    }
    cout << ((double)answ * 100) / 1e6 << '\n';
}
