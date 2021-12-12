#include <iostream>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

int calculate(vector<int> &array, int n, int s1, int s2, vector<int> &, vector<int> &);

int main() {
    int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    vector<int> result1;
    vector<int> result2;
    cout << calculate(array, n - 1, 0, 0, result1, result2) << "\n";
}

int calculate(vector<int> &array, int n, int s1, int s2, vector<int> &result1, vector<int> &result2) {
    if (n < 0) {
        return abs(s1 - s2);
    }

    int incS1 = calculate(array, n - 1, s1 + array[n], s2, result1, result2);
    int incS2 = calculate(array, n - 1, s1, s2 + array[n], result1, result2);

    int result = min(incS1, incS2);
    if (result == incS1) {
    } else {
    }

    return result;
}
