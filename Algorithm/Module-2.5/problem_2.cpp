#include <bits/stdc++.h>
using namespace std;

void bfs_level_traversal(int src, vector<vector<int>> &adj, vector<bool> &is_visited, vector<int> &level){
    queue<int> q;
    q.push(src);
    is_visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj[parent]){
            if(!is_visited[child]){
                q.push(child);
                is_visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

void print_level(int target_level, int n, vector<int> &level){
    vector<int> level_value;
    for(int i = 0; i < n; ++i){
        if(level[i] == target_level){
            level_value.push_back(i);
        }
    }

    sort(level_value.rbegin(), level_value.rend());
    
    for(int node : level_value){
        cout << node << " ";
    }
    cout << endl;
}

int main(){
    int node, edge;
    cin >> node >> edge;

    vector<vector<int>> adj(node);
    for(int i=0;i<edge;i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int target_level;
    cin >> target_level;

    vector<bool> is_visited(node, false);
    vector<int> level(node, -1);

    bfs_level_traversal(0, adj, is_visited, level);
    print_level(target_level, node, level);

    return 0;
}