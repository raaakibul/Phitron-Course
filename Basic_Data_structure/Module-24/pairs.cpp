#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    list<pair<string, int>> A;
    int size;
    cin >> size;
    
    for(int i=0;i<size;i++){
        string name;
        int value;
        
        cin >> name >> value;
        A.push_back(make_pair(name, -value));
    }

    A.sort();

    for(auto &list_of_pair : A){
        cout << list_of_pair.first << " " << (-list_of_pair.second) << endl;
    }
    return 0;
}