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
void insert_a_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void print_fun(Node* head){
    Node* tmp = head;
    cout<<"Your Link List: ";
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        insert_a_tail(head,val);
    }
    print_fun(head);
    cout<<"Linked List Print Done.";
    return 0;
}