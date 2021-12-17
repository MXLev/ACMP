//https://acmp.ru/index.asp?main=task&id_task=284

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int k = 0;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int f, t;
        cin >> f >> t;
        for (int j = f - 1; j < t; ++j) {
            cout << arr[j] << ' ';
        }
        cout << '\n';
    }
}