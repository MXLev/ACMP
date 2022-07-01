//
// Created by Lev Skuratov on 24.06.2022.
// https://acm.timus.ru/problem.aspx?space=1&num=1226

#include <iostream>
#include <vector>

using namespace std;


int main() {
    string str;
    while (getline(cin, str)) {
        int i = 0;
        for (int q = 0; q < str.size(); ++q) {
            string word;
            for (; isalpha(str[i]); ++i) {
                word += str[i];
            }

            for (int j = word.size() - 1; j >= 0; --j) {
                cout << word[j];
            }
//            cout <<  '/' <<  word << '/';
            while (!isalpha(str[i])) {
                cout << str[i];
                i++;
            }

            word = "";
            i++;
        }
        str = "";
    }
}