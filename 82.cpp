//
// Created by Beast on 24.05.2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> first(n);
    set<int> firstCopy;
    set<int> secondCopy;
    for (int i = 0; i < n; ++i) {
        cin >> first[i];
        firstCopy.insert(first[i]);
    }
    vector<int> second(m);
    for (int i = 0; i < m; ++i) {
        cin >> second[i];
        secondCopy.insert(second[i]);
    }
    if (n < m){
        for (int i = 0; i < n; ++i) {
            if (secondCopy.find(first[i]) != secondCopy.end()){
                cout << first[i] << '\n';
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (firstCopy.find(second[i]) != firstCopy.end()){
                cout << second[i] << '\n';
            }
        }
    }
}