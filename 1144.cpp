#include <iostream>
#include <vector>

using namespace std;

int main(){
    int temp;
    vector<int> nums;
    while (cin >> temp){
        if (temp != 0){
            nums.push_back(temp);
        } else {
            break;
        }
    }
    int min_local_dist = 101;
    for (int i = 1; i < nums.size() - 1; ++i) {
        if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1]){
            for (int j = 1; j < nums.size() - 1; ++j) {
                if (nums[j - 1] < nums[j] && nums[j] > nums[j + 1] && i != j){
                    min_local_dist = min(abs(j - i), min_local_dist);
                }
            }
        }
    }
    if (min_local_dist == 101){
        cout << 0;
    } else {
        cout << min_local_dist;
    }
}