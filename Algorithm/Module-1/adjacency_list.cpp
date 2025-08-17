#include <bits/stdc++.h>
using namespace std;
int main(){

    int node, edge;
    cin >> node >> edge;
    
    vector<int> mat[node + 1];
    while(edge--){
        int A, B;
        cin >> A >> B;
        mat[A].push_back(B);
        mat[B].push_back(A);
    }
    for (int i = 0; i < mat[3].size(); i++){
        cout << mat[3][i] << " ";
    }

    return 0;
}