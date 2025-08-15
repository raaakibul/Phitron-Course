#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        int size, value;
        cin >> size;

        list<int>A; 
        for(int i=0;i<size;i++){
            cin >> value;
            A.push_back(value);
        }

        A.sort();
        A.unique();

        for(int val : A){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}