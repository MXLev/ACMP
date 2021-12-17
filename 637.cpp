//https://acmp.ru/index.asp?main=task&id_task=637

#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int count = 0, teams = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= k){
            count++;
            teams += k;
        } else {
            teams += arr[i];
        }
    }
    if (count == n){
        cout << k * n;
    } else {
        cout << teams;
    }
}