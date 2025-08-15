#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int size;
    cin >> size;
    
    priority_queue<long long int,vector<long long int>,greater<long long int>>A;
    
    for(int i=0; i<size;i++){
        long long int X;
        cin >> X;
        A.push(X);
    }
       
    int queries;
    cin >> queries;
    
    while(queries--){
        int command;
        cin >> command;
        
        if(command==0){
            int value;
            cin >> value;
            A.push(value);
            cout << A.top() << endl;
        }
        else if(command==1){
            if(A.empty()){
                cout << "Empty" << endl;
            }
            else{
                cout << A.top() << endl;
            }
        }
        
        else if(command==2){
            if (A.empty()){
                cout << "Empty" << endl;
            }
            else{
                A.pop();
                if (A.empty()){
                    cout << "Empty" << endl;
                }
                else{
                    cout << A.top() << endl;
                }
            }
        }
    }

    return 0;
}