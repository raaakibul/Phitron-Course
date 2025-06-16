#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    //complexity = NlogN
    for(int i=1;i<n;i++){ 
        for(int j=1;j<n;j*=2){ // infinite loop j=0
            cout << "Hello" << endl;
        }
    }
    return 0;
}