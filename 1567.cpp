//
// Created by Beast on 01.10.2022.
// https://timus.online/problem.aspx?space=1&num=1567

#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> keyAlphabet;

    string alphabet = "abcdefghijklmnopqrstuvwxyz.,!# ";
    int t = 1;
    for (int i = 0; i < 31; ++i) {
        keyAlphabet[alphabet[i]] = t;
        if (t == 3 || alphabet[i] == 'z'){
            t = 0;
        }
        t++;
    }
    alphabet.erase();
    string input;
    getline(cin, input);

    int mumsBUISNESSman= 0;
    for (char & i : input) {
        mumsBUISNESSman += keyAlphabet[i];
    }
    cout << mumsBUISNESSman << '\n';
}