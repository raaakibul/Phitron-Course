#include <bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int first, second;
    void make_pair(int a, int b){
        first = a;
        second = b;
    }
};

int main(){

    int a;
    string b;
    cin >> a >> b;

    pair<int, string> p;
    
    p = make_pair(a, b);
    
    cout << p.first << " " << p.second << endl;
    
    return 0;
}