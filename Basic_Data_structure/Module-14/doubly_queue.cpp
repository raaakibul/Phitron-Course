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


class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;
    void push(int value){
        size++;
        Node *newNode = new Node(value);
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
        size--;
        Node* deleteHead = head;
        head = head->next;

        if(head != NULL)
            head->previous = NULL;
        
        delete deleteHead;
    }
    int front(){
        return head->value;
    }
    int size(){
        return size;
    }
    bool empty(){
        if (size == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int value;
        cin >> value;
        q.push(value);
    }
    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}