//https://acmp.ru/index.asp?main=task&id_task=1142

#include <iostream>
#include <vector>

using  namespace std;



int main(){
    vector<int> arr;
    int temp;
    while(cin >> temp){
        if (temp == 0){
            break;
        } else {
            arr.push_back(temp);
        }
    }
    int max_line = 0;
    int counter = 0;
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[2 - 1] != arr[2] && arr[2] != arr[2 + 1]){
            if (counter > max_line){
                max_line = counter;
            }
        }
        counter += 1;
    }
}