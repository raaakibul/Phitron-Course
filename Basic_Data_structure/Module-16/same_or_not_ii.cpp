#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* previous;
    Node* next;
    Node(int value){
        this->value = value;
        this->previous = NULL;
        this->next = NULL;
    }
};

class stk{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int ln = 0;
    void push(int value){
        ln++;
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }
    
    void pop() {
        if (head == NULL){
            return;
        }
        ln--;
        
        Node* deleteNode = tail;
        tail = tail->previous;
        
        if(tail == NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }

    delete deleteNode;
}
    
    int top(){
        return tail->value;
    }
    int size(){
        return ln;
    }
    int empty(){
        return ln == 0;
    }
};


class qeue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int ln = 0;
    
    void push(int value){
        ln++;
        Node* newNode = new Node(value);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }
    
    void pop(){
        if (head == NULL){
             return;
        }
        ln--;
        Node* deleteNode = head;
        head = head->next;
        
        if(head == NULL){
            tail = NULL;
        }
        else{
            head->previous = NULL;
        }
        
        delete deleteNode;
    }
    
    int front(){
        return head->value;
    }
    
    int size(){
        return ln;
    }
    
    int empty(){
        return ln == 0;
    }
};


int main()
{
    // Write your code here
    int N, M;
    cin >> N >> M;
    
    stk A;
    qeue B;
    
    for(int i=0;i<N;i++){
        int values;
        cin >> values;
        A.push(values);
    }

    for(int i=0;i<M;i++){
        int values;
        cin >> values;
        B.push(values);
    }
    
    if(A.size() != B.size()){
        cout << "NO" << endl;
    } 
    else{
        while(!A.empty()){
            if(A.top() != B.front()){
                cout << "NO" << endl;
                return 0;
            }
            A.pop();
            B.pop();
        }
        cout << "YES" << endl;
    }

    return 0;
}