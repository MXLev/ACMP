#include <iostream>


using namespace std;

int main() {
    unsigned long long c, h, o;
    cin >> c >> h >> o;
    unsigned long long counter = 0;
    while (c > 0 && h > 0 && o > 0){
        c -= 2;
        h -= 6;
        --o;
        ++counter;
    }
    cout << counter;
}