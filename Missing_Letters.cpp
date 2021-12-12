#include <iostream>

using namespace std;

int main(){
    string snow_sentence, initials;
    cin >> snow_sentence >> initials;
    for (int i = 0; i < snow_sentence.size(); ++i) {
        if (snow_sentence[i] == '?'){
            if ((i < snow_sentence.size()) && snow_sentence[i + 1] == '?') {
                snow_sentence[i] = initials[0];
                snow_sentence[i + 1] = initials[1];
                continue;
            }
            if ((i < snow_sentence.size()) && snow_sentence[i + 1] == initials[1]){
                snow_sentence[i] = initials[0];
            } else if (i > 0 && snow_sentence[i - 1] == initials[0]){
                snow_sentence[i] = initials[1];
            } else {
                snow_sentence[i] = 'A';
            }
        }
    }
    int counter = 0;
    for (int i = 0; i < snow_sentence.size(); ++i){
        if (snow_sentence[i] == initials[0]){
            if ((i < snow_sentence.size()) && snow_sentence[i + 1] == initials[1]){
                ++counter;
            }
        }
    }
    cout << counter << '\n';
    cout << snow_sentence;
}