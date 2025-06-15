#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        int count =0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                count =1; //time complexity = O(n)
            }
        }
        
        if(count==1){
            cout << "found" << endl;
        }
        else{
            cout << "not found";
        }
    }
    return 0;
}