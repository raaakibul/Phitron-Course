#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout << v.capacity()<<endl;
    v.push_back(10);
    cout << v.capacity()<<endl;
    v.push_back(20);
    v.push_back(30);
    cout << v.capacity()<<endl;
    v.resize(7,100);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}