#include <bits/stdc++.h>
using namespace std;
int main(){

    string name1 = "Abdur";
    string name2 = "Rahim";
    cout<<name1<<endl;
    name1+=name2;
    cout<<name1<<endl;
    name1.append(name1);
    cout<<name1<<endl;

    string name1 = "Abdur";
    name1=name1+"Rahim";  
    name1.push_back('A');
    cout<<name1<<endl;
    name1.pop_back();
    cout<<name1<<endl;
    name1.pop_back();
    name1[4]='u';
    cout<<name1<<endl;

    string name1 = "AbdurRahim";
    name1.erase(6,1);
    cout<<name1<<endl;
    name1.replace(6,1," R. R");
    name1.replace(6,0," R. ");
    name1.insert(6," Rahman ");
    cout<<name1<<endl;

    return 0;
}