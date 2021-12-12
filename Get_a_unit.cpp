#include <iostream>
#include <map>

using namespace std;
map <int, string> map_operations;

string calculate(string input){
    string result = "";
    if (stoi(input) == 1){
        return result;
    }
    if (input.size() == 1){
        return map_operations[stoi(input)];
    }
    int len = input.size();
    if (input.size() % 2 == 0){
        if (input.size() == 2){
            if (input[1] == '1') {
                return "4" + calculate(input.substr(len / 2,len          } else {
                return "3" + calculate(input.substr(0, len / 2));
            }
        } else {
            return "3" + calculate(input.substr(0, len / 2));
        }
    } else if (stoi(input) % 2 == 0){
        return "2" + calculate(to_string(stoi(input) / 2));
    } else {
        while (input.size() < (len + 1)){
            result += "1";
            input = to_string(stoi(input) * 2);
        }
        return result + calculate(input);
    }
}

void init() {
    map_operations[2] = "2";
    map_operations[3] = "113";
    map_operations[4] = "22";
    map_operations[5] = "13";
    map_operations[6] = "13";
    map_operations[7] = "13";
    map_operations[8] = "13";
    map_operations[9] = "13";
}


int main() {
    init();

    string input;
    cin >> input;
    if (stoi(input) == 0){
        cout << -1;
        return 0;
    }
    string result = calculate(input);
    cout <<  result.size() << '\n';
    cout <<  result;
}
