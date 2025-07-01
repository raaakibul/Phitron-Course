#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int test_case;
    cin >> test_case;
    
    while(test_case--){
        int n;
        cin >> n;
        
        vector<int>v(n);
        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        
        int sorted = 0;
        
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
            sorted = 1;
            }
        }
        if(sorted==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}