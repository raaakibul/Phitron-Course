#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){
    
    int x =10;
    p =&x;
    cout << "Fun --->" << *p << endl;
    return;
}
int main(){

    // int x =100;
    // cout << x <<endl;

    // int *p = new int;
    // *p = 10;
    // cout << *p << endl;

    fun();
    cout << "Main--->" << *p << endl;

    return 0;
}