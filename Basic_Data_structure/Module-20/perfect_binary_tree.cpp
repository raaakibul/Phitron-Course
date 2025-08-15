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

int count_node(Node* root) {
    if(root == NULL){
        return 0;
    }

    int left_node = count_node(root->left);
    int right_node = count_node(root->right);

    return left_node + right_node + 1;
}

int length(Node* root){
    if(!root){
         return 0;
    }

    int left_length = length(root->left);
    int right_length = length(root->right);

    return max(left_length, right_length) + 1;
}


int main()
{
    // Write your code here
    Node* root = input_Binary_tree();
    
    int size_of_Binary_tree = count_node(root);
    int size = length(root);
    int result = (pow(2,size)-1);
    
    if( result==size_of_Binary_tree){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}