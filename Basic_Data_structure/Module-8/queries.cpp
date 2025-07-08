#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    long long int value;
    Node* next;
    Node(long long int value){
        this->value = value;
        this->next = NULL;
    }
};

void insert_head(Node* &head, long long int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, long long int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}

void delete_nth_indx(Node *&head, int idx){
    if(head == NULL || idx < 0){
        return;
    }
    if(idx==0){
        Node* current = head;
        head = head->next;
        delete current;
        return;
    }
    
    Node* current = head;
    for(int i=0;current != NULL && i<idx-1;++i){
        current = current->next;
    }

    if(current==NULL || current->next==NULL){
        return;
    }

    Node* delete_idx = current->next;
    current->next = current->next->next;
    delete delete_idx;
}

int main()
{
    // Write your code here
    int queries;
    cin >> queries;
    Node *head = NULL;
    
    for(int i=0;i<queries;i++){
        int x;
        long long int v;
        cin >> x >> v;
        
        if(x==0){
            insert_head(head, v);
        }
        else if(x==1){
            insert_tail(head, v);
        }
        else if(x==2){
            delete_nth_indx(head, v);
        }
        
        Node* current = head;
        while(current != NULL){
            cout << current->value << " ";
            current=current->next;
        }
        cout << endl;
    }

    return 0;
}