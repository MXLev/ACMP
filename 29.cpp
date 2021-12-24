//
// https://acmp.ru/index.asp?main=task&id_task=29
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
    vector<int> enrj(n);
    enrj[0] = 0;
    enrj[1] = abs(arr[1] - arr[0]);
    for (int k = 2; k < n; ++k) {
        enrj[k] = min(abs(arr[k] - arr[k - 1]) + enrj[k - 1], 3 * abs(arr[k]-arr[k - 2]) + enrj[k - 2]);
    }
    cout << enrj[enrj.size() - 1];
}
