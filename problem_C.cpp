#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int calculate(map<int, set<int>> campus, int current_node, int findNode, vector<bool> &visited);

int main(){
    int n;
    cin >> n;
    map<int, set<int>> p;
    map<int, set<int>> q;
    for (int i = 1; i < n; ++i) {
        int temp;
        cin >> temp;
        p[i + 1].insert(temp);
        p[temp].insert(i + 1);
    }
    for (int i = 1; i < n; ++i) {
        int temp;
        cin >> temp;
        q[i + 1].insert(temp);
        q[temp].insert(i + 1);
    }

    vector<bool> visited(n + 1, false);
    int min_depth = 10000000, min_i = 0, min_j = 0;

    for (auto e : p) {
        int i = e.first;
        for (auto j : e.second) {
            if (i == j) {
                continue;
            }
            std::fill(visited.begin(), visited.end(), false);
            int pDepth = calculate(p, i, j, visited);

            if (pDepth >= min_depth) {
                continue;
            }

            std::fill(visited.begin(), visited.end(), false);
            int qDepth = calculate(q, i, j, visited);
            int depth = pDepth + qDepth;
            if (min_depth > depth){
                min_depth = depth;
                min_i = i;
                min_j = j;
            }

            if (min_depth == 2) {
                cout << min_depth << '\n' << min_i << ' ' << min_j;
                return 0;
            }
        }
    }

    cout << min_depth << '\n' << min_i << ' ' << min_j;
}

int calculate(map<int, set<int>> campus, int current_node, int findNode, vector<bool> &visited) {
    if (current_node == findNode) {
        return 0;
    }
    visited[current_node] = true;
    int depth = 10000000;
    set<int> adjacencies = campus[current_node];
    for (auto adjNode : adjacencies) {
        if (visited[adjNode]) {
            continue;
        }
        int current_depth = calculate(campus, adjNode, findNode, visited);
        depth = min(current_depth, depth);
    }

    return 1 + depth;
}