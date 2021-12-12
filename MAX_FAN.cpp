#include <iostream>

using namespace std;

string truncate (string input){
    int i = 0;
    while (input[i] == '0' && i < input.size() - 1){
        i++;
    }
    return input.substr(i);
}

int main() {
    int n = 0;
    cin >> n;
    string input, max_fan;
    string alphabet = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int result = 0, count = 1, max = -1;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        input = truncate(input);
        int w = 1;
        for (int j = input.size() - 1; j >= 0; --j) {
            result += alphabet.find(input[j]) * w;
            w++;
        }
        if (max == result){
            ++count;
        }
        if (max < result){
            max_fan = input;
            max = result;
            count = 1;
        }
    }
    cout << max_fan << '\n' << count;
}