//
// https://acmp.ru/index.asp?main=task&id_task=62
//

#include <iostream>

using namespace std;

int main(){
    string input;
    cin >> input;
    if (((input[1] - 'A') + input[0] - '0') % 2 == 0){
        cout << "WHITE";
    } else {
        cout << "BLACK";
    }
}