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

void insert_head_node(Node* &head, Node* &tail, int value){
    
    Node* newnode=new Node(value);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->previous=newnode;
    head=newnode;
}

void insert_tail_node(Node* &head, Node* &tail, int value){
    Node *newNode = new Node(value);
    
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

void insert_position_of_node(Node*& head, int position, int value) {
    Node* newnode = new Node(value);
    if(head==NULL){
        head = newnode;
        return;
    }
    if(position==0){
        newnode->next = head;
        head->previous = newnode;
        head = newnode;
        return;
    }

    Node* temp = head;
    for(int i=1;i<=position-1;i++) {
        temp = temp->next;
        if(temp==NULL){
            cout << "Invalid" << endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
    if(newnode->next!= NULL){
        newnode->next->previous = newnode;
        newnode->previous = temp;
    }
}

void print_left_to_right(Node* head);
void print_right_to_left(Node* tail);

int main()
{
    // Write your code here
    
    Node* head=NULL;
    Node* tail=NULL;
    int test_case;
    cin >> test_case;
    
    while(test_case--){
        int position, value;
        cin >> position >> value;
        
        int size = 0;
        for(Node* temp=head; temp!=NULL;temp=temp->next){
            size++;
        }

        if(size<position){
            cout << "Invalid" << endl;
        }
        else if(position==0){
            insert_head_node(head, tail, value);
            print_left_to_right(head);
            print_right_to_left(tail);
        }
        else if(size==position){
            insert_tail_node(head, tail, value);
            print_left_to_right(head);
            print_right_to_left(tail);
        }
        else{
            insert_position_of_node(head, position, value);
            print_left_to_right(head);
            print_right_to_left(tail);
        }
    }

    return 0;
}

void print_left_to_right(Node* head){
    cout << "L -> ";
    while(head!=NULL){
        cout << head->value << " ";
        head=head->next;
    }
    cout<<endl;
}

void print_right_to_left(Node* tail){
    cout << "R -> ";
    while(tail!=NULL){
        cout << tail->value << " ";
        tail=tail->previous;
    }
    cout<<endl;
}