//
// Created by Beast on 10.09.2022.
// https://timus.online/problem.aspx?space=1&num=1581
#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int counter = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]){
            counter++;
        } else {
            cout << counter << ' ' << arr[i - 1] << ' ';
            counter = 1;
        }
    }
    cout << counter << ' ' << arr[n - 1] << ' ';
}
