#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(a - c) ==2  and abs(b - d) == 1){
        cout << "YES";
    }
    else if (abs (a - c) == 1 and abs(b - d) == 2)
        cout << "YES";
    else{
        cout << "NO";
    }
}
