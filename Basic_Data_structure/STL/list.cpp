#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v;
    // List declaration
    list<int>li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);

    list<int>:: iterator it;
    // one way to print
    for(it=li.begin(); it!=li.end();it++){
        cout << *it<< " ";
    }
    cout <<endl;
    // another way to print list
    for(auto it:li){
        cout<< it << " ";
    }
    cout<<endl;

    li.push_front(40);
    li.push_front(50);
    for(auto it:li){
        cout << it << " ";
    }
    cout <<endl;
    li.pop_front();
    li.pop_back();
    for(auto it:li){
        cout << it << " ";
    }
    return 0;
}