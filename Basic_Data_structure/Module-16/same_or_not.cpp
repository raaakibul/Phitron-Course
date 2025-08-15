#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int N, M;
    cin >> N >> M;
    
    stack<int> A;
    queue<int> B;
    
    for(int i=0;i<N;i++){
        int values;
        cin >> values;
        A.push(values);
    }

    for(int i=0;i<M;i++){
        int values;
        cin >> values;
        B.push(values);
    }
    
    if(A.size() != B.size()){
        cout << "NO" << endl;
    } 
    else{
        while(!A.empty()){
            if(A.top() != B.front()){
                cout << "NO" << endl;
                return 0;
            }
            A.pop();
            B.pop();
        }
        cout << "YES" << endl;
    }

    return 0;
}