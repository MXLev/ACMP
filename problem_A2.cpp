#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int m = 0;

    cin >> n;
    cin >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int start = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[0]) {
            start = i;
            break;
        }
    }

    int p = 0;
    for (int k = start; k <= n - m; ++k) {
        int j = 0;
        for (int i = k; i < n; ++i) {
            if (a[i] == b[j]) {
                if (j == 0) {
                    k = i;
                }
                ++j;
            }

            if (j == m) {
                for (; p <= k; ++p) {
                    cout << i + 1 << ' ';
                }
                break;
            }
        }
    }

    for (int i = p; i < n; ++i) {
        cout << -1 << ' ';
    }

    return 0;
}