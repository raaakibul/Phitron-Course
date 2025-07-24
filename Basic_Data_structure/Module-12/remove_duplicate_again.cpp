#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    list<int>N;
    int value;
    while(cin >> value){
        if(value ==-1){
            break;
        }
        N.push_back(value);
    }
    
    N.sort();
    N.unique();
    
    for(auto v:N){
        cout << v <<" ";
    }

    return 0;
}