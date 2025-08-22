#include <bits/stdc++.h>
using namespace std;

void bfs_traversal(int source, vector<vector<int>> &adj, vector<int> &visited, vector<int> &level) {
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    level[source] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child] = 1;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main() {
    int node, edge;
    cin >> node >> edge;

    vector<vector<int>> adj(node);
    vector<int> visited(node, 0);
    vector<int> level(node, -1);

    while(edge--){
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    int source;
    cin >> source;

    bfs_traversal(source, adj, visited, level);

    for(int i = 0; i < node; i++)
        cout << i << " " << level[i] << endl;
    

    return 0;
}
