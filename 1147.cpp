#include <iostream>
#include <string>

using  namespace std;

int main(){
    string n;
    cin >> n;
    if (islower(n)){
        cout << upper(n);
    } else {
        cout << n;
    }
}