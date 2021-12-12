#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    int result = 0;
    int value = 0;
    vector<int> array;
    do {
        result = scanf("%d", &value);
        if (result > 0) {
            array.push_back(value);
        }

    } while (result > 0);

    sort(array.begin(), array.end());
    int diff = abs(array[1] - array[0]);
    for (int i = 0; i < array.size() - 1; i++) {
        if (abs(array[i + 1] - array[i]) != diff){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}