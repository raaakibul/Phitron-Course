#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 && j==n/2){
                cout << "X";               
            }
            else if(i==j){
                cout << "\\";                
            }
            else if(j==n-1-i){
                cout << "/";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}