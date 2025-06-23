#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    // Input 
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Sorting
    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--) {
        int num;
        cin >> num;

        if (binary_search(v.begin(),v.end(), num)){
            cout << "YES\n";
        } 
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
