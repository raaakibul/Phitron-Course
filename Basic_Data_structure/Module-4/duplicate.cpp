#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int N;
    cin >> N;
    int A[N];
    
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    sort(A,A+N);
    int count = 0;
    
    for(int i=0;i<N;i++){
        if(A[i]==A[i+1]){
            count = 1;
        }
    }
    if(count ==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }    

    return 0;
}