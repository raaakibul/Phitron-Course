#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v; //type 1
    // vector<int> v(5); //type 2
    // vector<int> v(10,-1); //type 3
    // vector<int> v2(v);//type 4
    int a[5] = {1,2,3,5,6};
    vector<int> v(a,a+5); //type 5
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << v.size() <<endl;
    return 0;
}