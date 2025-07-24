#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    string s;
    Node* next;
    Node* previous;
    Node(string s){
        this->s=s;
        this->next=NULL;
        this->previous=NULL;
    }
};

void insert_node(Node* &head, Node* &tail, string s){
    Node* newnode=new Node(s);
    
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    
    tail->next=newnode;
    newnode->previous=tail;
    tail=newnode;
}
int main()
{
    // Write your code here
    
    Node*head=NULL;
    Node*tail=NULL;
    string s;
    
    while(cin >> s){
        if(s=="end"){
            break;
        }
        insert_node(head,tail,s);
    }
    
    int test_case;
    cin >> test_case;
    Node* current = head;

    while(test_case--){
        string command, visit_value;
        cin >> command;

        if (command == "visit"){
            cin >> visit_value;
            
            Node* temp = head;
            
            while(temp && temp->s != visit_value){
                temp = temp->next;
            }

            if(temp){
                current = temp;
                cout << current->s << endl;
            } 
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(command == "prev"){
            if(current && current->previous){
                current = current->previous;
                cout << current->s << endl;
            }
            else{
                cout << "Not Available\n";
            }
        }
        else if(command == "next"){
            if(current && current->next){
                current = current->next;
                cout << current->s << endl;
            }
            else{
                cout << "Not Available\n";
            }
        }
    }
    
    return 0;
}