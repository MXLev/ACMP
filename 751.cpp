//https://acmp.ru/index.asp?main=task&id_task=751

#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;
    if (x % 2 == 0){
        cout << 0 << ' ' << 0;
    } else{
        cout << 2 << ' ' << x + 2;
    }
}