#include <iostream>
#include <algorithm>
#include <vector>

using  namespace std;

int main(){
    int n;
    string schedule;
    cin >> n;
    cin >> schedule;

    vector<char> R;
    vector<char> G;
    vector<char> B;

    for (int i = 0; i < schedule.size(); ++i) {
        if (schedule[i] == 'R') {
            R.push_back('R');
        } else if (schedule[i] == 'G') {
            G.push_back('G');
        } else if (schedule[i] == 'B') {
            B.push_back('B');
        }
    }

    int r = 0, g = 0, b = 0;
    string result;
    while (r < R.size() || g < G.size() || b < B.size()) {
        if (r < R.size()) {
            result += R[r];
            r++;
        }
        if (g < G.size()) {
            result += G[g];
            g++;
        }
        if (b < B.size()) {
            result += B[b];
            b++;
        }
    }

    cout << result;
}