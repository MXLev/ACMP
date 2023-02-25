//
// Created by Lev Skuratov on 23.07.2022.
//https://timus.online/problem.aspx?space=1&num=1135

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    string input;
    string  t;
    while (cin >> t){
        input += t;
    }
    int answer = 0, counter = 0;
    for (int i = input.size() - 1; i >= 0; --i) {
        if (input[i] == '>'){
            answer += input.size() - i - counter - 1;
            counter++;
        }
    }
    cout << answer << '\n';
}