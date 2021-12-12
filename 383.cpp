#include <iostream>
#include <string>

using namespace std;

int num_n(string n){
    int sum_n = 0;
    for (int i = 0; i < n.size(); ++i) {
        sum_n += (n[i] - 48);
    }
    return sum_n;
}

bool is_beautiful_num(int n){
    string str_n = to_string(n);
    int sum_n = num_n(str_n);
    return sum_n % str_n.size() == 0;
}

int main() {
    string i;
    cin >> i;
    int count = 0;
    int temp = 1;
    while (count < stoll(i)){
        if (is_beautiful_num(temp)){
            count++;
        }
        temp++;
    }
    cout << temp - 1;
}