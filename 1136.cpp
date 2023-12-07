//
// Created by Beast on 19.02.2023.
// https://timus.online/problem.aspx?space=1&num=1136

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
typedef long int li;
vector<int> ans;
vector<int> arr;
void topSort(int left, int right, int n){
    if (right < 0, left > right){
        return;
    }
    int index = left;
    for (int i = left; i < right; ++i) {
        if (arr[i] > arr[left]){
            if (arr[i - 1] < arr[right]){
                break;
            } else {
                i = index;
                topSort(i, right, n);
            }
        }
    }

    for (int i = index; i < right; ++i) {
        if (arr[i] > arr[right]){
            if (arr[i - 1] < arr[left]){
                break;
            } else {
                topSort(left, i, n);
            }
        }
    }
    ans.push_back(arr[right]);
}

int main(){
    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    topSort(0, n, n);
    for (int an : ans) {
        cout << an;
    }
}