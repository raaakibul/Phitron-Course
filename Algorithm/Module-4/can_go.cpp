#include <bits/stdc++.h>
using namespace std;

bool is_valid_cell(int i, int j, int N, int M){
    return i >= 0 && i < N && j >= 0 && j < M;
}

bool breadth_first_search(const vector<string>& grid, pair<int, int> source, pair<int, int> destination){
    int N = grid.size();
    int M = grid[0].size();
    
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    queue<pair<int, int>> q;
    
    q.push(source);
    visited[source.first][source.second] = true;

    vector<pair<int, int>> directions = {{0,1}, {-1,0}, {0,-1}, {1,0}};

    while(!q.empty()){
        auto [x, y] = q.front();
        q.pop();

        for(auto [dx, dy] : directions){
            int nx = x + dx;
            int ny = y + dy;

            if(is_valid_cell(nx, ny, N, M) && !visited[nx][ny] && grid[nx][ny] != '#'){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    return visited[destination.first][destination.second];
}

int main()
{
    // Write your code here
    
    int N, M;
    cin >> N >> M;

    vector<string> grid(N);
    pair<int, int> source, destination;

    for(int i=0;i<N;i++){
        cin >> grid[i];
        for(int j=0;j<M; j++){
            if(grid[i][j] == 'A'){
                 source = {i, j};
            }
            if(grid[i][j] == 'B'){
                destination = {i, j};
            }
        }
    }

    if(breadth_first_search(grid, source, destination)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}