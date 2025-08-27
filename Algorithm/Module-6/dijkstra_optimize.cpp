#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<pair<int,int>>mat[N];
int dis[N];

class cmp{
    public:
    bool operator()(pair<int,int>&a, pair<int,int>&b){
        return a.second > b.second;
    }
};

void dijkstra(int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({s,0});
    dis[s]=0;

    while(!pq.empty()){
        auto p = pq.top(); pq.pop();
        int node = p.first, cost = p.second;
        for(auto child:mat[node]){
            int cNode = child.first, cCost = child.second;
            int netCost = cost + cCost;
            if(netCost < dis[cNode]){
                dis[cNode] = netCost;
                pq.push({cNode,netCost});
            }
        }
    }
}

int main(){

    int node,edge; 
    cin >> node >> edge;
    while(edge--){
        int a,b,c;
        cin >> a >> b >> c;
        mat[a].push_back({b,c});
        mat[b].push_back({a,c});
    }
    for(int i=0;i<N;i++){
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for(int i=0;i<node;i++){
        cout<<i<<"-> "<<dis[i]<<endl;
    }
    return 0;
}