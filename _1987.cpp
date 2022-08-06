//
// Created by Beast on 30.07.2022.
// https://timus.online/problem.aspx?space=1&num=1987

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comparator(){
    if (first.first < second.first){
        return true;
    }
    if (first.first > second.first){
        return false;
    }
    if (first.first == second.second){
        if (first.second > second.second){
            return false;
        } else {
            return true;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i] >> arr[i] ;
    }
    int m;
    cin >> m;
    vector<int> dots(n);
    for (int i = 0; i < m; ++i) {
        cin >> dots[i];
    }

    sort(arr.begin(), arr.end(), comparator);
}
