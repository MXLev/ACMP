//
// https://acmp.ru/index.asp?main=task&id_task=22
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    while (n / 2 != 0){
        arr.push_back(n % 2);
        n /= 2;
    }
    arr.push_back(n % 2);
    n /= 2;
    int answ = 0;
    for (int i : arr) {
        if (i == 1){
            answ++;
        }
    }
    cout << answ;
}