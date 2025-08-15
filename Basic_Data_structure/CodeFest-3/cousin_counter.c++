#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    
    Node(int x) {
        value = x;
        left = NULL;
        right = NULL;
    }
};

int main(){

    string line;
    getline(cin, line);
    istringstream iss(line);
    
    vector<int> arr;
    int num;
    while(iss >> num){
        arr.push_back(num);
    }

    if(arr.empty()){
        cout << endl;
        return 0;
    }

    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);

    int index = 1;
    while(!q.empty() && index < arr.size()){
        Node* current = q.front();
        q.pop();
        if(index < arr.size() && arr[index] != -1){
            current->left = new Node(arr[index]);
            q.push(current->left);
        }
        index++;
        if(index < arr.size() && arr[index] != -1){
            current->right = new Node(arr[index]);
            q.push(current->right);
        }
        index++;
    }

    queue<pair<Node*, Node*>> q_bfs;
    q_bfs.push({root, nullptr});

    while(!q_bfs.empty()){
        int level_size = q_bfs.size();
        vector<pair<Node*, Node*>> level_nodes;

        for(int i = 0; i < level_size; i++){
            auto [node, parent] = q_bfs.front();
            q_bfs.pop();
            level_nodes.push_back({node, parent});

            if (node->left){
                q_bfs.push({node->left, node});
            }
            if (node->right){
                q_bfs.push({node->right, node});
            }
        }

        map<Node*, int> parent_count;
        for(auto& [node, parent] : level_nodes){
            parent_count[parent]++;
        }

        for(auto& [node, parent] : level_nodes){
            node->value = level_size - parent_count[parent];
        }
    }

    queue<Node*> q_out;
    q_out.push(root);
    vector<int> result;

    while(!q_out.empty()){
        Node* current = q_out.front();
        q_out.pop();

        result.push_back(current->value);
        if(current->left){
            q_out.push(current->left);
        }
        if(current->right){
            q_out.push(current->right);
        }
    }

    for(int i = 0; i<result.size();i++){
        if(i > 0){
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;

    queue<Node*> q_del;
    q_del.push(root);
    while(!q_del.empty()){
        Node* current = q_del.front();
        q_del.pop();
        if(current->left){
            q_del.push(current->left);
        }
        if(current->right){
            q_del.push(current->right);
        }
        delete current;
    }

    return 0;
}