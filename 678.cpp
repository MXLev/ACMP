#include <iostream>
#include <string>

using namespace std;

int main(){
    string n;
    cin >> n;
    int aBC[3] = {1, 0, 0};
    for (int i : n) {
        if (i == 'A'){
            aBC[1] += aBC[0];
            aBC[0] = aBC[1] - aBC[0];
            aBC[1] = aBC[1] - aBC[0];
        }
        if (i == 'B'){
            aBC[2] += aBC[1];
            aBC[1] = aBC[2] - aBC[1];
            aBC[2] = aBC[2] - aBC[1];
        }
        if (i == 'C'){
            aBC[2] += aBC[0];
            aBC[0] = aBC[2] - aBC[0];
            aBC[2] = aBC[1] - aBC[0];
        }
    }
    if (aBC[0] == 1){
        cout << 1;
    }
    if (aBC[1] == 1){
        cout << 2;
    }
    if (aBC[2] == 1){
        cout << 3;
    }
}