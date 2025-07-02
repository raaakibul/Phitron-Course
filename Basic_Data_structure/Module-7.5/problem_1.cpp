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

void insert_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout <<tmp->val <<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int Size(Node *head){
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail(head2,tail2,val);
    }
    cout<<Size(head)<<" "<<Size(head2)<<endl;
    Size(head) == Size(head2) ? cout<<"YES" : cout<<"NO";
    return 0;
}