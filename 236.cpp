//
// https://acmp.ru/index.asp?main=task&id_task=236
//

#include <iostream>
#include <vector>
#include <valarray>

using namespace std;

int main() {
    string input;
    cin >> input;
    vector<int> arr;
    int x;
    cin >> x;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '+' || input[i] == '-' || i == 0){
            int k = 0;
            int n = input.substr(i).find('*');
            if (n == -1){
                int temp = input.substr(i).find('+');
                if (temp == -1){
                     temp = input.substr(i).find('-');
                }
                if (temp == -1){
                    arr.push_back(atoi((const char*) input.substr(i).c_str()));
                } else {
                    arr.push_back(atoi((const char*) input.substr(i, temp - i).c_str()));
                }
            } else {
                k = atoi((const char*) input.substr(i, n - i).c_str());
                arr.push_back(k * pow(x, input[n + 4]));
            }
        }
    }
    long long answ = 0;
    for (int i : arr) {
        answ += i;
    }
    cout << answ;
}