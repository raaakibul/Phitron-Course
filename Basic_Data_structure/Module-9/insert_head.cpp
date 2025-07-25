#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int Size_(Node*head){
    Node* tmp=head;
    int size=0;
    while(tmp!=NULL){
        size++;
        tmp=tmp->next;
    }
    return size;
}

void inser_head(Node* &head,Node*&tail,int vall){
    Node* newnode=new Node(vall);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_pos(Node* &head,int pos,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    if(pos==0){
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void linked_list(Node *head){
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_list(Node *tail){
    Node *tmp = tail;
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;
    while (true){
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int pos,vall;
    cin>>pos>>vall;
    if(pos==0){
        inser_head(head,tail,vall);
    }
    else if(pos==Size_(head)){
        insert_tail(head,tail,vall);
    }
    else if(pos>Size_(head)){
        cout<<"Invaid!\n";
    }
    else{
        insert_pos(head,pos,vall);
    }

    cout << "Forward Order: ";
    linked_list(head);
    cout << "Reverse Order: ";
    reverse_list(tail);
    return 0;
}