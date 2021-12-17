//https://acmp.ru/index.asp?main=task&id_task=929

#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 6 == 0){
        cout << n / 6 << ' ' << n * 6;
    } else {
        cout << 7 - (n - n / 6 * 6) + n / 6 << ' ' << n * 6;
    }
}