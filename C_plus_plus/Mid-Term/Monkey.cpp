#include <bits/stdc++.h>
using namespace std;
int main(){
   
    string input;

    while(getline(cin, input)){
        sort(input.begin(), input.end());
        
        for(int i=0; i<(int)input.size();i++){
            if (input[i] !=' '){
                cout << input[i];
            }
         }
        cout << "\n";
    }


    return 0;
}
