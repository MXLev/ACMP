//https://acmp.ru/index.asp?main=task&id_task=331

#include <iostream>

using  namespace std;

int main(){
    int h, m, hp, mp;
    char temp;
    cin >> h >> temp >> m >> hp >> mp;
    h += hp;
    m += mp;
    if (m > 59){
        m -= 60;
        h++;
    }
    if (h >= 24){
        h %= 24;
    }
    if (h <= 9){
        cout << 0 << h << ":";
    } else {
        cout << h << ":";
    }
    if (m <= 9){
        cout << 0 << m;
    } else {
        cout << m;
    }
}