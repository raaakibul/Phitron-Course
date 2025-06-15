#include<bits/stdc++.h>
using namespace std;
int main(){

    string line;
    getline(cin,line);
    string name;
    cin >> name;

    stringstream word(line);
    string s;
    int count=0;
    while(word>>s){
        if(s==name){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}