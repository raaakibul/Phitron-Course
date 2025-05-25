#include<iostream>
using namespace std;
int main(){
    int x = 6;
    if(x%2==0){
        cout << "Even";
    }else{
        cout << "Odd";
    }

    // ternary operator
    x%2==0 ? cout << "even" : cout<< "odd";
    
    return 0;
}