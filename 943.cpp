//https://acmp.ru/index.asp?main=task&id_task=943

#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, m; // размер
    int x, y; // точка
    cin >> n >> m >> x >> y;
    vector<vector<int>> arr2(n, vector<int> (m)); // 2d массив
    int counter = 0;
    for (int i = 0; i < n; ++i) {// подготовка
        if (i % 2 != 0){
            for (int j = m - 1; j >= 0; --j) {
                arr2[i][j] = counter;
                ++counter;
            }
        } else {
            for (int j = 0; j < m; ++j) { // подготовка
                arr2[i][j] = counter;
                ++counter;
            }
        }
    }
    cout << arr2[--x][--y];
}
