#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};

bool is_valid_cell(int x, int y, int N, int M, char matrix[][1000], bool visited[][1000]){
    return x >= 0 && x < N && y >= 0 && y < M && matrix[x][y] == '.' && !visited[x][y];
}

int depth_first_search(int x, int y, int N, int M, char matrix[][1000], bool visited[][1000]) {
    visited[x][y] = true;
    int count = 1;
    for(int i=0;i<4;i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if(is_valid_cell(nx, ny, N, M, matrix, visited)){
            count += depth_first_search(nx, ny, N, M, matrix, visited);
        }
    }
    return count;
}

int main()
{
    // Write your code here
    
    const int NMAX = 1000;
    int N, M;
    cin >> N >> M;

    char matrix[NMAX][NMAX];
    bool visited[NMAX][NMAX] = {false};

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    vector<int> apartments;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(matrix[i][j] == '.' && !visited[i][j]){
                apartments.push_back(depth_first_search(i, j, N, M, matrix, visited));
            }
        }
    }

    sort(apartments.begin(), apartments.end());

    if(apartments.empty()){
        cout << 0 << endl;
    }
    else{
        for(int room : apartments){
             cout << room << " ";
        }
        cout << endl;
    }

    return 0;
}