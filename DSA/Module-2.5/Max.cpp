#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max_value=INT_MIN;
    for (int i=0;i<n;i++){
        max_value=max(array[i],max_value);
    }
    cout<<max_value;
    return 0;
}