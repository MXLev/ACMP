#include <iostream>

using namespace std;

int main() {
    long long teams = 0;
    cin >> teams;
    cout << max(teams, teams * (teams - 1) * (teams - 2));
}