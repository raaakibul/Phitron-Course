#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    // vector<int> v(n);
    vector<int>v;
    v.push_back(1); //v[0]
    v.push_back(2); //v[1]
    v.push_back(3); 
    v.push_back(4);

    cout << v[0]<< " ";
    cout << v[1] <<endl;

    cout << v.at(0) << " ";
    cout << v.at(1) << endl;

    cout<< v.size() <<endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}