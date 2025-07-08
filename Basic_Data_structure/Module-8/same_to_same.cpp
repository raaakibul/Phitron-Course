#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

int main(){
    // Write your code here
        
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    int value;
    while(cin >> value){
        if(value == -1){
            break;
        }
        insert_tail(head, tail, value);
    }
    while(cin >> value){
        if(value == -1){
            break;
        }
        insert_tail(head1, tail1, value);
    }
    
    int n1 = 0;
    for(Node* current = head; current != NULL; current = current->next){
        n1++;
    }
    
    int n2=0;
    for(Node* current = head1; current != NULL; current = current->next){
        n2++;
    }

    if(n1 != n2){
        cout << "NO";
        return 0;
    }
    
    Node* current = head;
    Node* current1 = head1;
    int same = 1;

    while(current != NULL){
        if(current->value != current1->value) {
            same = 0;
            break;
        }
        current = current->next;
        current1 = current1->next;
    }
    
    if(same==1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}