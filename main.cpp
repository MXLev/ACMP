#include <iostream>


using  namespace std;

int main() {
    string a = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";
    while (a.size() != 1){
        long long temp = 0;
        for (char i : a) {
            temp += i - 48;
        }
        a = to_string(temp);
    }
    cout << a;
}