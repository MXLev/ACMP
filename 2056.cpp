//
// Created by Beast on 22.10.2022.
// https://timus.online/problem.aspx?space=1&num=2056

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    double gpa = 0;
    int A = 0, C = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        gpa += arr[i];

        if (arr[i] == 5){
            A++;
        } else if (arr[i] == 3){
            C++;
        }
    }
    gpa /= n;

    if (A == n && C == 0){
        cout << "Named\n";
    } else if (gpa >= 4.5 && C == 0){
        cout << "High\n";
    } else if (C == 0){
        cout << "Common\n";
    } else {
        cout << "None\n";
    }
}