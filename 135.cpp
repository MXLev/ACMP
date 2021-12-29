//
// https://acmp.ru/index.asp?main=task&id_task=338
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int> (m));
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
            if (temp == 1){
                count++;
            }
        }
    }
    vector<int> colours(count);
    for (int i = 0; i < count; ++i) {
        cin >> colours[i];
    }


}