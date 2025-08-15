#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        
        string S;
        cin >> S;
        
        stack<string>stk;
        
        for(char ch : S){
            string str(1, ch);
            
            if(str == "0"){
                stk.push(str);
            }
            else if(str == "1"){
                if(!stk.empty() && stk.top() == "0"){
                    stk.pop();
                }
                else{
                    stk.push(str);
                }
            }
        }
        
        if(stk.empty()){
            cout << "YES" << endl;
            }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}