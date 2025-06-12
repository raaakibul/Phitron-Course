#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int input;
    cin>>input;
    
    int array[input];
    for(int i=0;i<input;i++){
        cin>>array[i];
    }
    
    sort(array,input+array);
    
    for(int i=0;i<input;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    sort(array,array+input,greater<int>());
    
    for(int i=0;i<input;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
