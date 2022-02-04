//
// https://acmp.ru/index.asp?main=task&id_task=952
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > 0){
        cout << min(n, m) + abs(n - m) << ' ' << m - 1 + n;
    } else {
        cout << "Impossible";
    }
}