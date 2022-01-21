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
        string tempansw1 = to_string(stoi(answ) - 1);
        while (tempansw1.size() != answ.size()){
            string temp = "0";
            temp += tempansw1;
            tempansw1 = temp;
        }
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < 3; ++j) {
            sum1 += tempansw1[j] - 48;
        }
        for (int j = 0; j < 3; ++j) {
            sum2 += tempansw1[j + 3] - 48;
        }
        if (sum1 == sum2){
            bool1 = true;
        } else {
            bool1 = false;
        }
        sum1 = 0, sum2 = 0;
        string tempansw2 = to_string(stoi(answ) + 1);
        while (tempansw2.size() != answ.size()){
            string temp = "0";
            temp += tempansw2;
            tempansw2 = temp;
        }
        for (int j = 0; j < 3; ++j) {
            sum1 += tempansw2[j] - 48;
        }
        for (int j = 0; j < 3; ++j) {
            sum2 += tempansw2[j + 3] - 48;
        }
        if (sum1 == sum2){
            bool2 = true;
        } else {
            bool2 = false;
        }
        if (bool1 || bool2){
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
}