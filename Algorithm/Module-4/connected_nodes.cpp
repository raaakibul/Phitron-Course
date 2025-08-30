#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int node, edge;
    cin >> node >> edge;
    vector<int> adjacency_list[1000];
    
    while(edge--){
        int A,B;
        cin >> A >> B;
        adjacency_list[A].push_back(B);
        adjacency_list[B].push_back(A);
    }
    
    int queries;
    cin >> queries;
    
    while(queries--){
        int X;
        cin >> X;        
        if(adjacency_list[X].empty()){
            cout << -1 << endl;
        }
        else{
            sort(adjacency_list[X].rbegin(), adjacency_list[X].rend());
            for(int value : adjacency_list[X]){
                cout << value << " ";
            }
            cout << endl;
        }
    }

    return 0;
}