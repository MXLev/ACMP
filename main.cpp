#include <iostream>
#include <vector>
#include <algorithm>

using  namespace std;

int main() {
    vector<vector<int>> mat(4, vector<int>(6));

    mat[0][0] = 52;
    mat[0][1] = 13;
    mat[0][2] = 30;
    mat[0][3] = 82;
    mat[0][4] = 85;
    mat[0][5] = 10;

    mat[1][0] = 22;
    mat[1][1] = 86;
    mat[1][2] = 5;
    mat[1][3] = 83;
    mat[1][4] = 18;
    mat[1][5] = 36;

    mat[2][0] = 74;
    mat[2][1] = 60;
    mat[2][2] = 82;
    mat[2][3] = 8;
    mat[2][4] = 97;
    mat[2][5] = 31;

    mat[3][0] = 60;
    mat[3][1] = 60;
    mat[3][2] = 95;
    mat[3][3] = 93;
    mat[3][4] = 33;
    mat[3][5] = 81;

    int i = 0;
    for (int j = 0; j < mat.size(); ++j) {
        for (int t = 0; t < mat[j].size(); ++t) {
            if (i > 0 && mat[i - 1][j] > t){
                t = mat[i - 1][j];
            }
            if (j > 0 && mat[i][j - 1] > t){
                t = mat[i][j - 1];
            }
            mat[i][j] = mat[i][j] + t;
            if (j == 6){
                i = i + 1;
            }
        }
        if (i == 4){
            break;
        }
    }
    cout << mat[3][5];
}