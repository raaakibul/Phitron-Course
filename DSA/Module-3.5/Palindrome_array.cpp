#include<bits/stdc++.h>
using namespace std;
int fun(int *a){

    int *array=new int[*a];
    for(int i=0;i<*a;i++){
        cin >> array[i];
    }

    int i=0;
    int j=*a-1;
    while(i<j){
        if (array[i] != array[j]){
            delete[] array;
            return 1;
        }
        i++,j--;
    }
    return 0;
}
int main(){

    int *n=new int;
    cin>>*n;

    int ans=fun(n);
    if(ans==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}