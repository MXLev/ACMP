//
// https://acmp.ru/index.asp?main=task&id_task=264
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    int answ = 0;
    for (int i = 0; i < n; ++i) {
        int temperature = 0;
        cin >> temperature;
        if (temperature > 0){
            result++;
        } else {
            if (answ < result){
                answ = result;
            }
            result = 0;
        }
    }
    if (result > answ){
        cout << result;
    } else {
        cout << answ;
    }
}