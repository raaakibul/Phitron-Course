#include <bits/stdc++.h>
using namespace std;
int *sort_it(int input){
    int *array = new int[input];
    for(int i=0;i<input;i++){
        cin>>array[i];
    }
    sort(array,array+input,greater<int>());
    return array;
}
int main(){
    int input;
    cin >> input;
    
    int* sorted_array = sort_it(input);

    for(int i=0;i<input;i++){
        cout << sorted_array[i] << " ";
    }
    return 0;
}