//https://acmp.ru/index.asp?main=task&id_task=520

#include <iostream>

using  namespace std;

int main() {
    long long buy = 0;
    cin >> buy;
    int boxes = buy / 144, bunch = buy % 144 / 12, pair = buy % 12; // для ответа
    double min = 1e9 + 200000;
    for (int i = 0; i < 1000; ++i) {
        int npair = buy % 12, nboxes = buy / 144, nbunch = buy % 144 / 12; // временые
        double cost_sum = nboxes * 1140 + nbunch * 102.5 + npair * 10.5;
        if (min >= cost_sum){
            min = cost_sum; // обнавление
            boxes = buy / 144; // обнавление
            bunch = buy % 144 / 12; // обнавление
            pair = buy % 12; // обнавление
        }
        buy++;
    }
    cout << boxes << ' ' << bunch << ' ' << pair;
}
