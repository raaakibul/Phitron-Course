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


void left_node(Node* root){
    if(!root){
        return;
    }
    if(root->left){
        left_node(root->left);
        cout << root->left->value << " ";
    }
    else if(root->right){
        left_node(root->right);
        cout << root->right->value << " ";
    }
}

void right_node(Node *root){
    if(!root){
        return;
    }
    if(root->right){
        cout << root->right->value << " ";
        right_node(root->right);
    }
    else if(root->left){
        cout << root->left->value << " ";
        right_node(root->left);
    }
}

int main()
{
    // Write your code here
    Node* root = input_Binary_tree();
    
    if(root->left){
        left_node(root);
    }
    cout << root->value << " ";
    
    if(root->right){
        right_node(root);
    }
    cout << endl;

    return 0;
}