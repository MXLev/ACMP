//
// Created by Beast on 22.10.2022.
// https://informatics.msk.ru/mod/statements/view3.php?id=46540&chapterid=114108#1

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> l;
vector<vector<int>> arr;

void dfc(ll i){
    for (auto e: arr[i]) {
        if (l[e] != -1){ continue;}
        l[e] = l[i] + 1;
        dfc(e);
    }
}

int main(){
    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n - 1; ++i) {
        int a = 0, b = 0;
        cin >> a >> b;
        arr[--a].push_back(--b);
        arr[b].push_back(a);
    }

    l.assign(n, -1);
    l[0] = 0;
    dfc(0);
    ll max = 0, index = 0;
    for (int i = 0; i < n; ++i) {
        if (l[i] > max){
            max = l[i];
            index = i;
        }
    }
    l.assign(n, -1);
    l[index] = 0;
    dfc(index);
    cout << *max_element(l.begin(), l.end());
}