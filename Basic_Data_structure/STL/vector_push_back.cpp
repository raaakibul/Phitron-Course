#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    cout <<v.at(3)<< " ";
    cout << v[0] <<" ";
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}