//https://acmp.ru/index.asp?main=task&id_task=51

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string k;
    cin >> n >> k;
    int ksize = k.size(), answ = 1;
    while (n > 1){
        answ *= n;
        n -= ksize;
    }
    cout << answ;
}