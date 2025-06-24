#include <bits/stdc++.h>
using namespace std;
int main(){
    // Write your code here
    
    string names;
    getline(cin,names);
    
    stringstream s(names);
    string word;
    
    int found=0;
    
    while(s>>word){
        if(word=="Jessica"){
            found = 1;
            break;
        }
    }
    if(found==1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }    
    return 0;
}
