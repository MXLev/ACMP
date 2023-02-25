//
// Created by Lev Skuratov on 24.06.2022.
// https://webwhiteboard.com/board/dyGoqD8wLJkVR5h5TcaYstChsJQzzC4d/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 1; i <= n; ++i) {
        a.push_back(i);
    }
    vector<int> b;
    int add = n + 1;
    for (int i = 0; i < m; i++) {
        b.push_back(add);
        add += n;
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    for (int i = 0; i < m; ++i) {
        cout << b[i] << ' ';
    }
}