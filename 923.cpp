//
// https://acmp.ru/index.asp?main=task&id_task=923
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> pow2 = {0};
    long long pow = 1;
    while (pow < 2 * 1e18){
        pow2.push_back(pow);
        pow *= 2;
    }
    long long min_dist = 2e18;
    for (int i = 0; i < pow2.size(); ++i) {
        min_dist = min(min_dist, abs(pow2[i] - n));
    }
    cout << min_dist;
}
