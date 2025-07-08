#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        long long int value;
        Node* next;
        Node(long long int value){
            this->value=value;
            this->next=NULL;
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

int index_of_X(Node* head, int x){
    
    int index_value=0;
    
    Node* current=head;
    
    while(current!=NULL){
        if(current->value == x){
            return index_value;
        }
        current=current->next;
        index_value++;
    }
    return -1;
}


int main()
{
    // Write your code here
    int test_case;
    cin >> test_case;
    
    for(int i=0;i<test_case;i++){
        Node *head = NULL;
        Node *tail = NULL;
        long long int  value;
        
        while(cin >> value){
            if(value == -1){
                break;
            }
            insert_tail(head, tail, value);
        }
        
        long long int x;
        cin >> x;
        
        long long int output = index_of_X(head,x);
        cout << output << endl;
    }   

    return 0;
}