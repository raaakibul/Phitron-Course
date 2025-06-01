#include<bits/stdc++.h>
using namespace std;
int* fun(){
    // int a[5]; // if we return the value it will show segmentation fault
    int *a = new int[5]; // dynamic array
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    return a;
}
int main(){

    int* x = fun();
    for(int i=0;i<5;i++){
        cout << x[i] << " ";
    }  // segmentation fault

    return 0;
}