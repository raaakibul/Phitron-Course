#include<bits/stdc++.h>
using namespace std;

class myStack{

    public:
    list<int>myList;
    void push(int value){
        myList.push_back(value);
    }
    void pop(){
        myList.pop_back();
    }
    int top(){
        return myList.back();
    }
    int size(){
        return myList.size();
    }
    bool empty(){
        if(myList.size()==0) 
        return true;
        else 
        return false;
    }
};

int main(){

    myStack lst;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int v;
        cin >> v;
        lst.push(v);
    }
    while(!lst.empty()){
        cout << lst.top() << endl;
        lst.pop();
    }
    return 0;
}