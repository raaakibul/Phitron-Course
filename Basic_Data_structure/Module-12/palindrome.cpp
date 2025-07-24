#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* previous;
    
    Node(int value){
        this->value=value;
        this->next=NULL;
        this->previous=NULL;
    }
};

void insert_node(Node* &head, Node* &tail,int value){
    
    Node* newnode=new Node(value);
    
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    
    tail->next=newnode;
    newnode->previous=tail;
    tail=newnode;
}

void palindrome_node(Node* head, Node* tail){
    
    while(head != tail && head->previous != tail) {
        if (head->value != tail->value) {
            cout << "NO" << endl;
            return;
        }
        head = head->next;
        tail = tail->previous;
    }
    cout << "YES" << endl;
}

void print_node(Node* head);
int main()
{
    // Write your code here
    Node* head=NULL;
    Node* tail=NULL;
    int value;
    
    while(cin >> value){
        if(value==-1){
            break;
        }
        
        insert_node(head,tail,value);
    }
    
    palindrome_node(head,tail);

    return 0;
}

void print_node(Node* head){
    
    while(head!=NULL){
        cout << head-> value << " ";
        head=head->next;
    }
    cout<<endl;
}