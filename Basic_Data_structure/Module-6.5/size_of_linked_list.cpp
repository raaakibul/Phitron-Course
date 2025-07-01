#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void Insert_(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void Print_(Node* head){
    Node* tmp=head;
    cout<<"Your Linked List: ";
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void Size_(Node* head){
    Node* tmp=head;
    int cnt = 0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    cout<<"Your linked list Size is: "<<cnt<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        Insert_(head,tail,val);
    }
    Print_(head);
    Size_(head);
    return 0;
}