#include <iostream>


using namespace std;


class myclass {
    int a, b;
public:
    myclass(int i, int j) {
        a = i;
        b = j;
    }
    friend int comdenom(myclass x);

};

int comdenom(myclass x){
    int max = x.a < x.b ? x.a : x.b;

    for (int i = 2; i <= max; ++i) {
        if ((x.a % i) == 0 && (x.b % i) == 0){
            return i;
        }
    }
}

int main(){
    myclass n(18, 111);

    if (comdenom(n)){
        cout << "the common denominator is " << comdenom << "\n";
    } else {
        cout << "no common denominator \n";
    }

}