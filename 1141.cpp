//https://acmp.ru/index.asp?main=task&id_task=1141

#include <iostream>
#include <vector>


using namespace std;

int main() {
    int max_counter = 1, max_max = 1, a;
    vector<int> arr;
    cin >> a;
    while (a != 0){
        arr.push_back(a);
        cin >> a;
    }
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == arr[i + 1]){
            max_counter++;
        } else {
            if (max_max < max_counter){
                max_max = max_counter;
            }
            max_counter = 1;
        }
    }
    cout << max_max;
}