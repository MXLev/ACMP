#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    int c = 0;
    for (int i = 0; i < n; ++i) { //
        cin >> a[i];              // получение
    }                             //
    for (int i = 0; i < m; ++i) { //
        cin >> b[i];              // получение
    }                             //
    if (n < m){
        for (int i = 0; i < n; ++i) {
            cout << -1 << ' ';
        }
        return 0;
    }

    int k = 0, i = 0, j = 0;
    for (k = 0; k < c; ++k) {
        for (i = k; i < n; ++i){
            if (a[i] == b[j]){
                ++j;
                if (j == m){
                    break;
                }
            }
        }
        if (j == m){
            cout << i + 1 << ' ';
        } else {
            cout << -1 << ' ';
        }
        j = 0;
    }

    for (i = 0; i < m; ++i) {
        cout << -1 << ' ';
    }
}