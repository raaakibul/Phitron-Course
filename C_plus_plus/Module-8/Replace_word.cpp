#include <bits/stdc++.h>
using namespace std;
int main(){
    
    // Write your code here
    int test_case;
    cin >> test_case;
    while(test_case--){
        string s, x;
        cin >> s >> x;
        
        int pos = s.find(x);

        while(pos!=-1){
            s.replace(pos, x.length(), "#");
            pos = s.find(x);
        }

        cout << s << endl;
    }

    return 0;
}
