#include <bits/stdc++.h>
using namespace std;

bool is_valid(int i, int j, int r, int c){
    return !(i < 0 || i >= r || j < 0 || j >= c);
}

void bfs(int source_i, int source_j, int r, int c, vector<vector<char>> &mat, vector<vector<bool>> &is_visited, vector<vector<int>> &dis){
    vector<pair<int, int>> direc = {{0, 1}, {-1, 0}, {1, 0}, {0, -1}};
    queue<pair<int, int>> flow;

    flow.push({source_i, source_j});
    is_visited[source_i][source_j] = true;
    dis[source_i][source_j] = 0;

    while(!flow.empty()){
        auto par = flow.front();
        flow.pop();
        int a = par.first, b = par.second;

        for(auto d : direc){
            int child_i = a + d.first;
            int child_j = b + d.second;

            if(is_valid(child_i, child_j, r, c) && !is_visited[child_i][child_j]){
                flow.push({child_i, child_j});
                is_visited[child_i][child_j] = true;
                dis[child_i][child_j] = dis[a][b] + 1;
            }
        }
    }
}

int main(){

    int r, c;
    cin >> r >> c;

    vector<vector<char>> mat(r, vector<char>(c));
    vector<vector<bool>> is_visited(r, vector<bool>(c, false));
    vector<vector<int>> dis(r, vector<int>(c, -1));

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];

    int src_i, src_j;
    cin >> src_i >> src_j;

    bfs(src_i, src_j, r, c, mat, is_visited, dis);

    cout << dis[2][3] << endl;

    return 0;
}