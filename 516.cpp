//https://acmp.ru/index.asp?main=task&id_task=516

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> res;
    while (n > 0) {
        int r = n % 10;
        n = n / 10;
        res.push_back(r);
    }
    sort(res.begin(), res.end());
    double result = 0;
    for (int j : res) {
        result *= 10;
        result += j;
    }
    for (int i = 2; i < sqrt(result); ++i) {
        if ((int)result % i == 0){
            cout << "No";
            return 0;
        }
    }
    sort(res.rbegin(), res.rend());
    result = 0;
    for (int j : res) {
        result *= 10;
        result += j;
    }
    for (int i = 2; i <= sqrt(result); ++i) {
        if ((int)result % i == 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}