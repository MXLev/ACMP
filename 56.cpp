//
// Created by Beast on 18.02.2022.
// https://acmp.ru/index.asp?main=task&id_task=56

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> friends(n); // only input
    for (int i = 0; i < n; ++i) {
        cin >> friends[i];
    }
    int m;
    cin >> m;
    vector<string> friend_of(m); // only input
    for (int i = 0; i < m; ++i) {
        cin >> friend_of[i];
    }
    vector<string> mutual_friends; // answer
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (friends[i] == friend_of[j]){
                mutual_friends.push_back(friends[i]);
                friend_of[j] =  "";
            }
        }
    }
    sort(friends.begin(), friends.end());
    sort(friend_of.begin(), friend_of.end());
    sort(mutual_friends.begin(), mutual_friends.end());
    cout << "Friends: ";
    for (int i = 0; i < friends.size(); ++i) {
    if (!friends[i].empty()) {
        if (i == friends.size() - 1){
            cout << friends[i];

        } else {
            cout << friends[i] << ", ";
        }
        }
    }
    cout << '\n' << "Mutual Friends: ";
    for (int i = 0; i < mutual_friends.size(); ++i) {
        if (!mutual_friends[i].empty()){
            if (i == mutual_friends.size() - 1){
                cout << mutual_friends[i];
            } else {
                cout << mutual_friends[i] << ", ";
            }
        }
    }
    cout << '\n' << "Also Friend of: ";
    for (int i = 0; i < friend_of.size(); ++i) {
        if (!friend_of[i].empty()){
            if (i == friend_of.size() - 1){
                cout << friend_of[i];
            } else {
                cout << friend_of[i] << ", ";
            }
        }
    }
}