#include<bits/stdc++.h>
using namespace std;
int indegree[105];
vector<int> adj_list[105];
vector<int> topo;
queue<int> q;

int main(){

    int node,edge;
    cin >> node >> edge;
    while(edge--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    memset(indegree,0,sizeof(indegree));

    for(int i=0;i<node;i++)
        for(auto x : adj_list[i])
            indegree[x]++;
        
    for(int i=0;i<node;i++)
        if(indegree[i]==0)
            q.push(i);

    while(!q.empty()){
        int par = q.front();
        q.pop();
        topo.push_back(par);
        for(int child : adj_list[par]){
            indegree[child]--;
            if(indegree[child] == 0)
                q.push(child);
        }
    }

    if(topo.size() != node)
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";
    return 0;
}