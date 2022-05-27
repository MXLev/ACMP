//
// Created by Beast on 24.05.2022.
// https://acmp.ru/index.asp?main=task&id_task=82


#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> arr((int)10e5, 0);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        ++arr[t];
    }
    vector<int> arr2((int)10e5, 0);
    for (int i = 0; i < m; ++i) {
        int t;
        scanf("%d", &t);
        ++arr2[t];
    }
    for (int i = 0; i < (int)10e5; ++i) {
        if (arr[i] != 0 && arr2[i] != 0){
            printf("%d ", i);
        }
    }
}