#include <iostream>

using  namespace std;

int main() {
    long long buy = 0;
    int boxes = 0, bunch = 0, pair = 0; // для ответа
    cin >> buy;
    int min = 1e9 + 200000;
    for (int i = 0; i < 100000; ++i) {
        int npair = buy % 12, nboxes = buy / 144, nbunch = (buy / 12) % 12; // временые
        int cost_sum = nboxes * 1140 + nbunch * 102.5 + npair * 10.5;
        if (min >= cost_sum){
            min = cost_sum; // обнавление
            boxes = buy / 144; // обнавление
            bunch = (buy / 12) % 12; // обнавление
            pair = buy % 12; // обнавление
        }
        buy++;
    }
    cout << boxes << ' ' << bunch << ' ' << pair;
}