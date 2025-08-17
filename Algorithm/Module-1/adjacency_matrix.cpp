#include <bits/stdc++.h>
using namespace std;
int main(){

    int node, edge;
    cin >> node >> edge;
    int mat[node+1][node+1];
    memset(mat, 0, sizeof(mat));

    while(edge--){
        int A, B;
        cin >> A >> B;
        mat[A][B] = 1;
        mat[B][A] = 1;
    }
    for(int i=1;i<=node;i++){
        for(int j=1;j<=node;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}