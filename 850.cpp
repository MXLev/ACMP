//
// https://acmp.ru/index.asp?main=task&id_task=850
//

#include <iostream>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    cout << (max(a, b) + 1) / 2 << ' ' << min(a, b);
}
