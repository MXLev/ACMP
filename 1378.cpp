//
// Created by Beast on 28.05.2023.
//https://acm.timus.ru/problem.aspx?space=1&num=1378

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <ctime>

using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll count = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            ll count1 = 0, count0 = 0;
            if (arr[i][j] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            if (arr[i-1][j] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            if (arr[i-1][j-1] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            if (arr[i][j-1] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            if (count1 == 1 && count0 == 3){
                count += 1;
            }
        }
    }
    if (count == 4){
        cout << "square" << '\n';
    } else if (count == 3){
        cout << "triangle" << '\n';
    } else {
        cout << "circle" << '\n';
    }
}