#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    v.clear();
    cout << v.size() <<endl;

    if(v.empty()){
        cout << "Empty";
    }
    else{
        cout << "Not empty";
    }
    return 0;
}