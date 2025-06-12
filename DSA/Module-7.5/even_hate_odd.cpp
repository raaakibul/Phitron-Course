#include <bits/stdc++.h>
using namespace std;
int main(){

    int test_case;
    cin >> test_case;
    while (test_case--){
        long long int n;
        cin >> n;
        int array[n];
        for (int i = 0; i<n; i++){
            cin >> array[i];
        }
        if (n % 2 == 1){
            cout << "-1\n";
        }
        else{
            int even = 0;
            int odd = 0;
            int val = n / 2;
            for (int i = 0; i < n; i++){
                (array[i] % 2 == 0) ? even++ : odd++;
            }
            if (even == odd){
                cout << "0\n";
            }
            else{
                if (even > odd)
                {
                    int result = abs(even - val);
                    cout << result << endl;
                }
                else{
                    int result = abs(val - odd);
                    cout << result << endl;
                }
            }
        }
    }
    return 0;
}