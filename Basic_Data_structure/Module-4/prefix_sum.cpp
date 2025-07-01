#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int N;
    cin >> N;
    long long int A[N];
    
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    long long int prefix_sum[N];
    prefix_sum[0]=A[0];
    
    for(int i=1;i<N;i++){
        prefix_sum[i]=prefix_sum[i-1]+A[i];
    }
    
    reverse(prefix_sum, prefix_sum + N);
    
    for(int i=0;i<N;i++){
        cout << prefix_sum[i] << " ";
    }
    return 0;
}