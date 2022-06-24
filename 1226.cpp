//
// Created by Lev Skuratov on 24.06.2022.
// https://acm.timus.ru/problem.aspx?space=1&num=1226

#include <iostream>
#include <vector>

using namespace std;


int main() {
    string text;
    while (getline(cin, text)) {
        string word;
        for (int i = 0; isalpha(text[i]); ++i) {
            word += text[i];

        }
        for (int i = word.size(); i > 0 ; --i) {

        }
    }
}