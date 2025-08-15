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
        
        stack<string> stk;
        
        for(char x : S){
            if(!stk.empty()){
                if((stk.top()== "0" && x == '1') || (stk.top() == "1" && x == '0')){
                    stk.pop();
                }
                else{
                    string str(1, x);
                    stk.push(str);
                }
            }
            else{
                string str(1, x);
                stk.push(str);
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