#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v1;
    cout << v1.size() << endl; //0

    vector<int> v2(5);
    cout << v2.size() << endl; //5

    vector<int>v3(10,2);
    for(int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }   

    return 0;
}