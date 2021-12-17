#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> input(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        input[i] = {a, b};
    }
    int counter = 0;
    for (int i = 0; i <= 32; ++i) {
        if (counter == n) {
            cout << "YES";
            return 0;
        } else {
            counter = 0;
        }
        for (int j = 0; j < n; ++j) {
            if (input[j].first <= i && i <= input[j].second){
                counter++;
            }
        }
    }
    cout << "NO";
}