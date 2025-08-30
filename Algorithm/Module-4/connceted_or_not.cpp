#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int node, edge;
    cin >> node >> edge;
    vector<int> adjacency_list[1000];
     
    while(edge--){
        int A, B;
        cin >> A >> B;
        adjacency_list[A].push_back(B);
    }
    
    int queries;
    cin >> queries;
    
    while(queries--){
        int A, B;
        cin >> A >> B;
        
        if(A==B || count(adjacency_list[A].begin(), adjacency_list[A].end(),B)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}