#include <iostream>
#include <vector>
#include <map>

using namespace std;

void calculate(map<long long, long long> &road, long long index, long long size){
    if (road[index] < 2) {
        return;
    }

    vector<long long> stack;
    stack.push_back(index);

    while(stack.size() > 0) {
        int poppedIndex = stack.back();
        stack.pop_back();

        if (road[poppedIndex] == 2){
            long long left_index = poppedIndex - 1;
            long long right_index = poppedIndex + 1;

            road[poppedIndex] = 0;
            if (left_index >= 0){
                if (road.count(left_index) > 0) {
                    road[left_index]++;
                } else {
                    road[left_index] = 1;
                }
                stack.push_back(left_index);
            }
            if (right_index < size){
                if (road.count(right_index) > 0) {
                    road[right_index]++;
                } else {
                    road[right_index] = 1;
                }
                stack.push_back(right_index);
            }
        }
    }
}

int main() {
    long long l, r, n, index;
    char c;
    cin >> n >> l >> r;
    long long size = (r - l) + 1;
    map<long long, long long> road;
    for (long i = 0; i < n; ++i) {
        cin >> c >> index;
        long long idx = index - l;
        if (c == '+'){
            if (road.count(idx) > 0) {
                road[idx]++;
            } else {
                road[idx] = 1;
            }
            calculate(road, idx, size);
        } else {
            cout << road[idx] << '\n';
        }
    }
}