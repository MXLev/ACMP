#include <iostream>

int UP = 1;
int DOWN = 2;

int calc(int val, int dir) {
    if (val < 0) {
        return 0;
    }
    if (val > 60) {
        return 0;
    }

    std::cout << val << std::endl;

    if (val % 2 == 0) {
        calc(2 * val - 1, UP);
        calc(val / 2, DOWN);
    }

    if (val % 2 != 0) {
        calc(2 * val, UP);
        calc((val + 1) / 2, DOWN);
    }
}


int main(){
    int count = 0;

    calc(16, UP);
    calc(16, DOWN);
}

