#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void depth_first_search(int x, int y, vector<string> &grid, int n, int m){
    grid[x][y] = '#';

    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '.'){
            depth_first_search(nx, ny, grid, n, m);
        }
    }
}


int main()
{
    // Write your code here
    int N, M;
    cin >> N >> M;
    vector<string> grid(N);
    
    for(int i=0;i<N;i++){
        cin >> grid[i];
    }

    int apartment_count = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(grid[i][j]=='.'){
                depth_first_search(i, j, grid, N, M);
                apartment_count++;
            }
        }
    }
    cout << apartment_count << endl;

    return 0;
}