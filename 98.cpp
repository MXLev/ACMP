//
// Created by Beast on 29.04.2022.
// https://acmp.ru/index.asp?main=task&id_task=74

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sumFirst = 0, sumSecond = 0;
    for (int first = 0, second = n - 1, flag = 1; second >= first;) {
        if (arr[first] >= arr[second] && flag){
            flag = 0;
            first++;
            sumFirst += arr[first];
        } else if (arr[first] >= arr[second] && !flag){
            flag = 1;
            first++;
            sumSecond += arr[first];
        } else
        if (arr[first] < arr[second] && flag){
            flag = 0;
            second--;
            sumFirst += arr[second];
        } else if (arr[first] < arr[second] && !flag){
            flag = 1;
            second--;
            sumSecond += arr[second];
        }
    }
    cout << sumFirst << ':' << sumSecond;
}