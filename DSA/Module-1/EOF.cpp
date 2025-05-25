#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        cout << x << endl;
    }

  // setprecision
    double d = 24.456899;
    cout << fixed <<setprecision(2) << d <<endl;
    return 0;
}