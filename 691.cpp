//
// https://acmp.ru/index.asp?main=task&id_task=691
//

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    string checker = "ABCEHKOMPTXY";
    for (int i = 0; i < t; ++i) {
        string input;
        cin >> input;
        if (input.size() != 6){
            cout << "No" << '\n';
            continue;
        }
        if (checker.find(input[0]) == -1){
            cout << "No" << '\n';
            continue;
        }
        if (!isdigit(input[1])){
            cout << "No" << '\n';
            continue;
        }
        if (!isdigit(input[2])){
            cout << "No" << '\n';
            continue;
        }
        if (!isdigit(input[3])){
            cout << "No" << '\n';
            continue;
        }
        if (checker.find(input[4]) == -1){
            cout << "No" << '\n';
            continue;
        }
        if (checker.find(input[5]) == -1){
            cout << "No" << '\n';
            continue;
        }
        cout << "Yes" << '\n';
    }
}