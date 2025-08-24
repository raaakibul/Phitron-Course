#include <bits/stdc++.h>
using namespace std;
int r, c;
char mat[20][20];
bool is_visited[20][20];
vector<pair<int, int>> d = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool is_valid(int i, int j){
    return !(i < 0 || i >= r || j < 0 || j >= c);
}
void dfs(int source_i, int source_j){
    cout << source_i << " " << source_j << endl;
    is_visited[source_i][source_j] = true;
    for(int i = 0; i < 4; i++){
        int child_i = source_i + d[i].first;
        int child_j = source_j + d[i].second;
        if (is_valid(child_i, child_j) && !is_visited[child_i][child_j]){
            dfs(child_i, child_j);
        }
    }
}
int main(){

    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> mat[i][j];
        }
    }

    int src_i, src_j;
    cin >> src_i >> src_j;
    
    memset(is_visited, false, sizeof(is_visited));
    
    dfs(src_i, src_j);
    
    return 0;
}