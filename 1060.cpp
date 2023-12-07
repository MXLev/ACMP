//
// Created by Beast on 01.04.2023.
//


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    vector<ll> field(16);
    for (int i = 0; i < 16; ++i) {
        char x;
        cin >> x;
        if (x == 'w'){
            field[i] = 1;
        } else {
            field[i] = 0;
        }
    }
    ll ans = 17;
    for (ll mask = 0; mask < ll(1 << 16); ++mask) {
        ll cnt = 0;
        for (ll i = 0; i < 16; ++i) {
            if (mask & (ll)(1 << i)) {
                cnt++;
                field[i] ^= 1;
                if (i % 4 != 0){
                    field[i - 1] ^= 1;
                }
                if (i % 4 != 3){
                    field[i + 1] ^= 1;
                }
                if (i > 4){
                    field[i - 4] ^= 1;
                }
                if (i < 13){
                    field[i + 4] ^= 1;
                }
            }
        }
        bool flag = false;
        for (ll i = 1; i < 16; ++i){///проверяем получилось ли поле полностью белым/черным
            if (field[i] != field[i - 1]){
                flag = true;
                break;
            }
        }
        ///0123
        ///0123
        ///0123
        ///0123
        ///если получилось, тогда обновить ответ (посчитать сколько ячеек мы перевернули)
        for (ll i = 0; i < 16; ++i) { ///перевернули обратно
            if (mask & (ll)(1 << i)) {
                field[i] ^= 1;
                if (i % 4 != 0){
                    field[i - 1] ^= 1;
                }
                if (i % 4 != 3){
                    field[i + 1] ^= 1;
                }
                if (i > 4){
                    field[i - 4] ^= 1;
                }
                if (i < 13){
                    field[i + 4] ^= 1;
                }
            }
        }
        if (!flag){
            if (ans > cnt){
                ans = cnt;
            }
        }
    }
    if (ans == 17){
        cout << "Impossible" << '\n';
        return 0;
    }

    cout << ans << '\n';
}