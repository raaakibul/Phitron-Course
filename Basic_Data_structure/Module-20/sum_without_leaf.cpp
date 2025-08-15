#include <bits/stdc++.h>
using namespace std;

class Node{
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
    int root_value;
    cin >> root_value;

    if(root_value == -1){
        return NULL;
    }

    Node* root = new Node(root_value);
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


int sum_of_Parents_node(Node* root){
    if(!root){
        return 0;
    }
    if(!root->left && !root->right){
        return 0;
    }
    else{
        return root->value + sum_of_Parents_node(root->left) + sum_of_Parents_node(root->right);
    }
}


int main(){
    
    // Write your code here
    Node* root = input_Binary_tree();
    
    int sum_without_leaf = sum_of_Parents_node(root);
    
    cout << sum_without_leaf << endl;

    return 0;
}