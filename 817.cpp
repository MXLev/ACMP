//
// https://acmp.ru/index.asp?main=task&id_task=817
//

#include <iostream>

using namespace std;

int main() {
    long long n, m, d, k;
    cin >> n >> m >> d >> k;
    cout << m * (d * k) + n * (d * k) - n * m * d * d;
}