#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int queries;
    cin >> queries;
    
    queue<string>name;
    
    while(queries--){
        
        int commands;
        cin >> commands;
        
        if(commands==0){
            string person_name;
            cin >> person_name;
            name.push(person_name);
        }
        else if(commands==1){
            if(name.empty()){
                cout << "Invalid" << endl;
            } 
            else{
                cout << name.front() << endl;
                name.pop();
            }
        }
    }

    return 0;
}