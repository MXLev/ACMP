#include <iostream>
using  namespace std;

int main(){
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; ++i) {
        int n;
        cin >> n;
        bool start = true;
        bool ignore = false;

        int prev = 0;

        for (int j = 0; j < n; ++j) {
            int current = 0;
            cin >> current;
            if (ignore == true) {
                continue;
            }
            if (start == true) {
                prev = current;
                start = false;
            } else {
                int diff = abs(current - prev);
                if (diff % 2 != 0) {
                    cout << "NO" << "\n";
                    ignore = true;
                }
                prev = current;
            }
        }
        if (ignore == false) {
            cout << "YES" << "\n";
        }
    }
}