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

void insert_tail(Node* &head, Node* &tail, long long int value){
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

int difference_of_maxvalue_minvalue(Node* head){
    if (head == NULL){
        return 0;
    }
    
    int max_value = head->value;
    int min_value = head->value;
    
    Node* current = head;
    
    while(current != NULL){
        if(current->value < min_value){
            min_value = current->value;
        }
        if(current->value > max_value){
            max_value = current->value;
        }
        current = current->next;
    }
    
    long long int difference = max_value - min_value;
    
    return difference;
}

int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    
    long long int value;
    while(cin >> value){
        if(value == -1){
            break;
        }
        insert_tail(head, tail, value);
    }
    
    
    long long int output = difference_of_maxvalue_minvalue(head);
    
    cout << output;
    return 0;
}