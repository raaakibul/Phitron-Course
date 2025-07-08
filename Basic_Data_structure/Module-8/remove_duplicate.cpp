#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, int value){
    
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node* current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}


void remove_duplicates(Node* head) {
    Node* current = head;

    while(current != NULL){
        Node* previous = current;
        Node* new_value = current->next;

        while(new_value != NULL){
            if(new_value->value == current->value){
                previous->next = new_value->next;
                delete new_value;
                new_value = previous->next;
            }
            else{
                previous = new_value;
                new_value = new_value->next;
            }
        }

        current= current->next;
    }
}

int main(){
    // Write your code here
    Node *head = NULL;
    int value;
    
    while(cin >> value){
        if(value == -1){
            break;
        }
        insert_tail(head,value);   
    }
    
    remove_duplicates(head);
    
    Node* current = head;
    while(current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}