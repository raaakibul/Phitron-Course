#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // order of sqrt
    // O(sqrt(n))
    // divisor
    // for(int i=1;i<=n;i++){
    //     if(n%i == 0){
    //         cout << i << " ";
    //     }
    // }
    // another way optimize
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            cout << i << " " << n/i << " ";
        }
    }
    return 0;
}