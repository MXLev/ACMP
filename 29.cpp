//
// https://acmp.ru/index.asp?main=task&id_task=29
//
#include <iostream>
#include <vector>

using namespace std;

int calculate(vector<int> input, int energy, int progress, int running){
    if (calculate(input, energy, 0, 0) < calculate(input, energy, 0, 1)){
        if (input.size() - 1 > progress){
            energy = abs(input[progress + 1] - input[progress]);
            progress++;
        }
    } else {
        energy = 3 * abs(input[progress + 2] - input[progress]);
        progress += 2;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int energy = 0, platform = 0, running = 0;
    cout << calculate(arr,  energy, platform, running);
}
