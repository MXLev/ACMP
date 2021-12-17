#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < n - 1; ++i) {
        int a1, b1;
        cin >> a1 >> b1;
        if (b >= a1){
            a = a1;
            b = b1;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}