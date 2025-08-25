#include <bits/stdc++.h>
using namespace std;

void bfs_traversal(int src, vector<vector<int>> &adj, vector<bool> &is_visited, vector<int> &path) {
    queue<int> q;
    q.push(src);
    is_visited[src] = true;
    
    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(int child : adj[par]){
            if(!is_visited[child]){
                q.push(child);
                is_visited[child] = true;
                path[child] = par;
            }
        }
    }
}

void shortest_destination(int des, vector<int> &path) {
    int cnt = 0;
    int x = des;
    while (x != -1) {
        cnt++;
        x = path[x];
    }
    cout << cnt - 1 << endl;  // -1 because we count edges, not nodes
}

int main() {
    int node, edge;
    cin >> node >> edge;

    vector<vector<int>> adj(node + 1);
    for(int i=0;i<edge;i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int query;
    cin >> query;

    while(query--){
        int src, des;
        cin >> src >> des;

        vector<bool> is_visited(node + 1, false);
        vector<int> path(node + 1, -1);

        bfs_traversal(src, adj, is_visited, path);

        if(!is_visited[des]){
            cout << -1 << endl;
        }
        else{
            shortest_destination(des, path);
        }
    }

    return 0;
}