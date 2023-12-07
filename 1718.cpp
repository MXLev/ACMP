//
// Created by Beast on 11.06.2023.
// https://acm.timus.ru/problem.aspx?space=1&num=1718

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <map>

using namespace std;
typedef long double ld;

int main(){
    int n;
    cin >> n;
    map<string, pair<bool, bool>> map;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        string arg;
        cin >> arg;
        int test;
        if (arg == "CE"){
            continue;
        }
        if (arg == "AC") {
            map[str].second |= true;
            continue;
        } else {
            cin >> test;
        }
        if (test == 6){
            map[str].second |= true;
        }
        if (test == 7){
            map[str].first |= true;
            map[str].second |= true;
        }
    }
    int min = 0,  max = 0;
    for (auto str : map) {
        min += str.second.first;
        max += str.second.second;
    }
    cout << min << ' ' << max << '\n';
}