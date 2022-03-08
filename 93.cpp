//
// Created by Beast on 08.03.2022.
// https://acmp.ru/index.asp?main=task&id_task=93

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> correct(n);
    for (int i = 0; i < n; ++i) {
        cin >> correct[i];
    }
    int m;
    cin >> m;
    vector<string> incorrect(m);
    for (int i = 0; i < m; ++i) {
        cin >> incorrect[i];
    }
    vector<int> answ(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (correct[i].size() == incorrect[i].size()){

            }
        }
    }
}