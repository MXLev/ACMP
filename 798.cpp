#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time{
    int hour, minute, seconds;

    bool operator<(const Time& other) const{
        if (hour == other.hour){
            if (minute == other.minute){
                return seconds < other.seconds;
            }
            return minute < other.minute;
        }
        return hour < other.hour;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Time> times(n);
    for (int i = 0; i < n; ++i) {
        int h, m, s;
        cin >> h >> m >> s;
        times[i] = Time{h, m, s};
    }
    sort(times.begin(), times.end());
    for (int i = 0; i < n; ++i) {
        cout << times[i].hour << ' ' << times[i].minute << ' ' << times[i].seconds << '\n';
    }
}