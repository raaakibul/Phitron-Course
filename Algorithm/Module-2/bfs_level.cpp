#include <bits/stdc++.h>
using namespace std;

void bfs_traversal(int source, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &level) {
    queue<int> q;
    q.push(source);
    visited[source] = true;
    level[source] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj[parent]){
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main() {
    int node, edge;
    cin >> node >> edge;

    vector<vector<int>> adj(node);
    vector<bool> visited(node, false);
    vector<int> level(node, -1);

    while(edge--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int source;
    cin >> source;

    bfs_traversal(source, adj, visited, level);

    for(int i = 0; i<node; i++)
        cout << i << " " << level[i] << endl;
    

    return 0;
}