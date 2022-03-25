//
// Created by Beast on 11.03.2022.
// https://informatics.msk.ru/mod/statements/view.php?id=192#1

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#define pb push_back

typedef long long ll;
using namespace std;

int main(){
    //arr.pb(1);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> arr2(k);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < k; ++i) {
        cin >> arr2[i];
    }
    for (int i = 0; i < k; ++i) {
        int left = -1, right = n;
        while (right - left != 1){
            if (arr2[i] <= arr[(right + left) / 2]){
                right = (right + left) / 2;
            } else {
                left = (right + left) / 2;
            }
        }
        ll answ = 0;
        if (right < n){
            answ = arr[right];
        } else {
            answ = 4000000000;
        }
        left = -1, right = n;
        while (right - left != 1){
            if (arr2[i] >= arr[(right + left) / 2]){
                left = (right + left) / 2;
            } else {
                right = (right + left) / 2;
            }
        }
        ll answ2 = 0;
        if (left >= 0){
            answ2 = arr[left];
        } else {
            answ2 = 4000000000;
        }
        //cout << answ << ' ' << answ2 << ' ';
        if (abs(arr2[i] - answ) == abs(arr2[i] - answ2)){
            cout << min(answ, answ2) << '\n';
        } else if (abs(arr2[i] - answ) > abs(arr2[i] - answ2)) {
            cout << answ2 << '\n';
        } else if (abs(arr2[i] - answ) < abs(arr2[i] - answ2)){
            cout << answ << '\n';
        }
//        double x;
//        cout << fixed << setprecision(10) << x;
    }
}