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
        int left = 0, right = n - 1;
        while (left != right){
            if (arr2[i] > arr[(right - left) / 2]){
                if ((right - left) / 2 == 0){
                    left = (right - left) / 2 + 1;
                } else {
                left = (right - left) / 2;
                }
            } else if (arr2[i] < arr[(right - left)]) {
                if ((right - left) / 2 == 0){
                    right = (right - left) / 2 + 1;
                } else {
                    right = (right - left) / 2;
                }
            } else {
                if ((right - left) / 2 == 0){
                    right = (right - left) / 2 + 1;
                } else {
                    right = (right - left) / 2;
                }
                break;
            }
        }
//        double x;
//        cout << fixed << setprecision(10) << x;
        cout << arr[right] << '\n';
    }
}