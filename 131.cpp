#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0, age, gender, num = 0;
    for (int i = 0; i < n; ++i) {
        cin >> age >> gender;
        if (gender == 1){
            if (age > max){
               max = age;
               num = i + 1;
            }
        }
    }
    if (num == 0){
        cout << -1;
    } else {
    cout << num;
    }
}