#include <bits/stdc++.h>
using namespace std;
int main(){

    int node, edge;
    cin >> node >> edge;

    vector<pair<int, int>> p;
    
    while(edge--){
        int A, B;
        cin >> A >> B;
        p.push_back({A, B});
    }
    for(auto x : p){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}