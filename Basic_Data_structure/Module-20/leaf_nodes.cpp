#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node *left;
    Node *right;
    
    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_Binary_tree(){
    int value;
    cin >> value;

    if(value == -1){
        return NULL;
    }

    Node* root = new Node(value);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        int left_value, right_value;
        cin >> left_value >> right_value;

        if(left_value != -1){
            current->left = new Node(left_value);
            q.push(current->left);
        }

        if(right_value != -1){
            current->right = new Node(right_value);
            q.push(current->right);
        }
    }

    return root;
}
 

int main(){
    
    Node* root = input_Binary_tree();

    if(!root){
        cout << "no node available" << endl;
        return 0;
    }

    vector<int>leaves;
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(!node->left && !node->right) {
            leaves.push_back(node->value);
        }

        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
    }

    if(leaves.empty()){
        cout << "no node available" << endl;
    }
    else{
        sort(leaves.rbegin(), leaves.rend());
        for(int val : leaves){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}