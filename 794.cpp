//https://acmp.ru/index.asp?main=task&id_task=794

#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if (m >= k) {
        cout << (k - 1) * n + m / k * n;
    } else {
        cout << m * n + m / k * n;
    }
}