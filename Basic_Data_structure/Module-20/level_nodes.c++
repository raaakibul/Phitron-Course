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


vector<int>level_of_node(Node* root, int level) {
    vector<int> result;
    if(!root){
        return result;
    }
    queue<Node*> q;
    q.push(root);

    int current_level = 0;

    while(!q.empty()){
        int size = q.size();
        vector<int>CL;

        while(size--){
            Node* node = q.front();
            q.pop();

            if(current_level == level){
                result.push_back(node->value);
            }

            if(node->left){
                 q.push(node->left);
            }
            if(node->right){
                 q.push(node->right);
            }
        }

        if(current_level == level){
             break;
        }
        current_level++;
    }

    return result;
}


int main()
{
    // Write your code here
    
    Node* root = input_Binary_tree();
    
    int level;
    cin >> level;
    
    vector<int>node = level_of_node(root, level);
    
    if(node.empty()){
        cout << "Invalid" << endl;
    }
    else{
        for(int val : node){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}