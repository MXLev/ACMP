//
// Created by Beast on 14.11.2022.
// https://timus.online/problem.aspx?space=1&num=1106

#include <iostream>
#include <vector>

using namespace std;

vector<int> colour;
vector<vector<int>> arr;
vector<int> firsGroup;
//bool flag = false;

void dfs(int i, int const cur_col){
//    if (flag){
//        return;
//    }
    if (colour[i] != -1){
        return;
    }
    colour[i] = cur_col;

    for (int j = 0; j < arr[j].size(); ++j) {
//        if (cur_col == colour[arr[i][j]]){
//            cout << "0\n";
//            flag = true;
//            return;
//        }
        dfs(j, cur_col ^ 1);
    }

    if (cur_col == 0){
        firsGroup.push_back(i);
    }
}

int main(){
    int n;
    cin >> n;
    colour.resize(n);
    arr.resize(n);

    for (int i = 0; i < n; ++i) {
        int a = -1;
        while (true){
            cin >> a;
            if (a != 0){
                arr[i].push_back(a);
            } else {
                break;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (colour[i] == -1){
            dfs(i, 0);
        }
    }
    cout << firsGroup.size() << '\n';
    for (int i = 0; i < firsGroup.size(); ++i) {
        cout << firsGroup[i] << ' ';
    }
}