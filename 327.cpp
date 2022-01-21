//
// https://acmp.ru/index.asp?main=task&id_task=327
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string answ;
        cin >> answ;
        bool bool1 = false, bool2 = false;
        for (int j = 0; j < 2; ++j) {
            int sum1 = 0, sum2 = 0;
            for (int k = 0; j < 3; ++j) {
                sum1 += answ[k] - 48;
            }
            for (int k = 0; j < 3; ++j) {
                sum2 += answ[k + 3] - 48;
            }
            if (j == 0 && sum1 == sum2){
                bool1 = true;
            } else if (sum1 == sum2 && i == 1){
                bool2 = true;
            } else {
                bool1 = false;
                bool2 = false;
            }
        }
        if (bool1 && bool2){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';

        }
    }
}