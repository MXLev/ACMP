//
// https://acmp.ru/index.asp?main=task&id_task=787
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n % 2 == 0){
        cout << max(arr[n / 2], arr[n / 2 - 1]);
    } else {
        cout << max(arr[n / 2], arr[n / 2 - 1]);
    }
}