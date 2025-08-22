#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];

bool is_vis[1005];

void traverse(int source){
    queue<int> q;
    q.push(source);
    is_vis[source] = true;
    
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        cout << parent << endl;
        for (int child : v[parent]){
            if (!is_vis[child]){
                q.push(child);
                is_vis[child] = true;
            }
        }
    }
}

int main(){

    int node, edge;
    cin >> node >> edge;
    while(edge--){
        int A, B;
        cin >> A >> B;
        v[A].push_back(B);
        v[B].push_back(A);
    }
    int source;
    cin >> source;
    traverse(source);
    return 0;
}