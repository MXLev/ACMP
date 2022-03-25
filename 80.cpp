//https://acmp.ru/index.asp?main=task&id_task=80

#include <iostream>
#define sec second

using namespace std;

int main() {
    string input;
    cin >> input;
    if (!isdigit(input[0]) && input[0] != '-'){
        cout << "ERROR";
        return 0;
    }
    int fistIdx = 0, firstNum = 0;
    for (int i = 0; isdigit(input[i]); ++i) {
        firstNum *= 10;
        firstNum += input[i];
        fistIdx = i;
    }
    if (!isdigit(input[fistIdx + 1])){
        cout << "ERROR";
        return 0;
    }
    pair<int, int> secondIdx;
    int secondNum = 0;
    secondIdx.first = fistIdx + 2;
    for (int i = secondIdx.first; isdigit(input[i]); ++i) {
        secondNum *= 10;
        secondNum += input[i];
        secondIdx.second = i;
    }
    if (!isdigit(input[secondIdx.second + 1])){
        cout << "ERROR";
        return 0;
    }
    pair<int, int> thirdIdx;
    int thirdNum = 0;
    thirdIdx.first = secondIdx.sec + 2;
    for (int i = thirdIdx.first; isdigit(input[i]); ++i) {
        thirdNum *= 10;
        thirdNum += input[i];
        thirdIdx.second = i;
    }
    if (!isdigit(input[thirdIdx.second + 1])){
        cout << "ERROR";
        return 0;
    }
    char operation = input[fistIdx + 1];
    if (operation == '+'){

    }
    if (operation == '-'){

    }
    if (operation == '*'){

    }
    if (operation == '/'){

    }
}