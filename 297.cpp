//
// https://acmp.ru/index.asp?main=task&id_task=297
//

#include <iostream>

using namespace std;

int main(){
    string input;
    cin >> input;
    int counter = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '0'){
            counter++;
            continue;
        }
        if (input[i] == '6'){
            counter++;
            continue;
        }
        if (input[i] == '8'){
            counter += 2;
            continue;
        }
        if (input[i] == '9'){
            counter += 1;
            continue;
        }
    }
    cout << counter;
}