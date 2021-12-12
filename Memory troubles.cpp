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
    sort(arr.rbegin(), arr.rend());
    int y = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            y = max(y, arr[i + 1]);
        }
        if (arr[0] % arr[i] != 0){
            y = arr[i];
            break;
        }
    }
    cout << y << ' ' << arr[0];
}
