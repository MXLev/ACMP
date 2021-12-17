//https://acmp.ru/index.asp?main=task&id_task=686

#include <iostream>
#include <vector>
#include <algorithm>

using  namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> ans(n, 0);
    int first = 0, last = 0;
    for (int i = 0; i < n; ++i) {

    }

}