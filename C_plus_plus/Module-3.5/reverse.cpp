#include<bits/stdc++.h>
using namespace std;
int main(){

    int input;
    cin>>input;
    
    int array[input];

    for (int i=0;i<input;i++){
        cin >> array[i];
    }

    int num1,num2;
    cin >> num1 >> num2;

    swap(num2,num1);
    cout << num2 << num1 << endl;
    
    for (int i=0;i<input;i++){
        cout << array[i] <<" ";
    }
    
    cout << endl;

    return 0;
}