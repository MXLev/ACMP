//
// Created by Beast on 28.01.2022.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> arr(4);
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    //a + b - n для двух видов
    //a + b + c - n близко не то
    //a + b
    if (t == 1){

    } else if (t == 2){
        sort(arr.begin(), arr.end());
        cout << arr[0];
    }
}