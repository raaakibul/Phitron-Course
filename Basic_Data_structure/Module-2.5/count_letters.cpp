#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;
    int feq[26]={0};

    for(int i=0;i<s.size();i++){
        int val = s[i]-'a';
        feq[val]++;
    }
    for(int i=0;i<26;i++){
        if(feq[i] != 0)
        cout<<char(i+'a')<<" : "<<feq[i]<<endl;
    }
    return 0;
}