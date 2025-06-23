#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    vector<long long int>pre(n);
    pre[0]=v[0];
    for(int i=1;i<v.size();i++){
        pre[i]=pre[i-1]+v[i];
    }
    reverse(pre.begin(),pre.end());
    
    for(int i=0;i<v.size();i++){
        cout<<pre[i]<<" ";
    }
    return 0;
}