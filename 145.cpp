//https://acmp.ru/index.asp?main=task&id_task=145

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class big_integer {
    static const int BASE = 1000000000;

    bool _is_negative;

    vector<int> _digits;

    void _remove_leading_zeros();
public:
    friend std::ostream& operator <<(std::ostream&, const big_integer&);
    big_integer(string);
    friend const big_integer operator +(big_integer, const big_integer&);
};


big_integer::big_integer(string str) {
    if (str.size() == 0) {
        this->_is_negative = false;
    }
    else {
        if (str[0] == '-') {
            str.substr(1);
            this->_is_negative = true;
        }
        else {
            this->_is_negative = false;
        }

        for (long long i = str.size(); i > 0; i -= 9) {
            if (i < 9) {
                this->_digits.push_back(atoi(str.substr(0, i).c_str()));
            }
            else {
                this->_digits.push_back(atoi(str.substr(i - 9, 9).c_str()));
            }
        }
    }
    this->_remove_leading_zeros();
}

void big_integer::_remove_leading_zeros() {
    for (int i = _digits.size() - 1; i > 0; --i) {
        if (_digits[i] == 0) {
            _digits.pop_back();
        }
    }
};


std::ostream& operator <<(std::ostream& os, const big_integer& bi) {
    if (bi._digits.size() == 0) {
        os << 0;
    }
    else {
        if (bi._is_negative)
            os << '-';
        os << bi._digits.back();
        char old_fill = os.fill('0');
        for (long long i = static_cast<long long>(bi._digits.size()) - 2; i >= 0; --i)
            os << setw(9) << bi._digits[i];
        os.fill(old_fill);
    }
    return os;
}
const big_integer operator +(big_integer left, const big_integer& right) {
    for (int i = 0; i < max(left._digits.size(),right._digits.size()); ++i) {
        left._digits[i + 1] = left._digits[i + 1] + (left._digits[i] + right._digits[i]) / left.BASE;
        left._digits[i] = (left._digits[i] + right._digits[i]) % left.BASE;
    }
    return left;
}


int main() {
    string left, right;
    cin >> left >> right;
    big_integer i = big_integer(left) + big_integer(right);
    cout << i;
    return 0;
}