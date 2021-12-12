#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long c, h, o;
    cin >> c >> h >> o;
    vector<long long> min1 = {c / 2, h / 6, o};
    sort(min1.begin(), min1.end());
    cout << min1[0];
}