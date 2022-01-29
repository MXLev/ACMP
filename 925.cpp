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
    //a + b + c - n близко но не то
    //
    sort(arr.begin(), arr.end());
    if (t == 1){
        cout << ;
    } else if (t == 2){
        cout << arr[0];
    }
}