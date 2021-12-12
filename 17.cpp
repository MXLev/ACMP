#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    n--;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; ++i) {
        int flag = 0;
        if (n % i == 0){
            for (int j = 0; j < i; ++j) {
                int k = j;
                while (i + j < n){
                    if (arr[j] == arr[i + j]){
                        j += i;
                    } else {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1){
                    break;
                }
                j = k;
            }
            if (flag == 0){
                cout << i;
                return 0;
            }
        }
    }
}