#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<pair<int, string>> a(3);
    cin >> a[0].second >> a[1].second >> a[2].second;
    a[0].first = a[0].second.size();
    a[1].first = a[1].second.size();
    a[2].first = a[2].second.size();
    sort(a.begin(), a.end());
    cout << a[2].second;
    return 0;
}