#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//дп(днамичекое програмирование)
int main(){
    int n;
    cin >> n;
    vector<int> nails(n);
    for (int i = 0; i < n; ++i) {
        cin >> nails[i];
    }
    sort(nails.begin(), nails.end());
    vector<int> dp(n);
    dp[0] = 10001;
    dp[1] = nails[1] - nails[0];
    for (int i = 2; i < n; ++i) {
        dp[i] = nails[i] - nails[i - 1] + min(dp[i - 1], dp[i - 2]);
    }
    cout << dp[n - 1];
}