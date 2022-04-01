//
// Created by Beast on 25.03.2022.
// https://informatics.msk.ru/mod/statements/view.php?id=192&chapterid=111728#1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long int li;

int main(){
    li n, m;
    cin >> n >> m;
    vector<li> arr(n);
    vector<li> arr2(m);
    for (li i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (li i = 0; i < m; ++i) {
        cin >> arr2[i];
    }
    li left, right;
    for (li i = 0; i < m; ++i) {
        left = -1, right = n;
        if (arr2[i] > arr[n - 1] || arr2[i] < arr[0]){
            cout << 0 << '\n';
            continue;
        }
        while (right - left != 1){
            if (arr[(right + left) / 2] > arr2[i]){
                right = (right + left) / 2;
            } else if (arr[(right + left) / 2] <= arr2[i]) {
                left = (right + left) / 2;
            }
        }
        if (arr[left] != arr2[i]) {
            cout << 0 << '\n';
            continue;
        }
        li j = left;
        while (j != n&& arr[j] == arr2[i]){
            right = j;
            j--;
        }
        cout << right + 1 << ' ' << left + 1 << '\n';
    }
}