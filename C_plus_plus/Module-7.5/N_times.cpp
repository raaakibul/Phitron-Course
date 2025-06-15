#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    while (test_case--){
        int n;
        string c;
        cin >> n >> c;
        while (n--){
            cout << c << " ";
        }
        cout<<endl;
    }
    return 0;
}