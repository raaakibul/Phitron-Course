#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int sum =0;
    // using loop 
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    // time complexity = O(n)

    cout << sum << endl;
    // using formula
    sum = (n*(n+1))/2;
    // time complexity = O(1)
    
    cout << sum << endl;
    return 0;
}