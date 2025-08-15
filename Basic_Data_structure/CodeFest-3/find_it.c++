#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;
    
    Node(int v){
        value = v;
        left = NULL;
        right = NULL;
    }
};


Node* build_tree(const vector<int>& arr){
    if(arr.empty() || arr[0] == -1){
        return NULL;
    }

    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;

    while(!q.empty() && i < arr.size()){
        Node* current = q.front(); q.pop();
        if(arr[i] != -1){
            current->left = new Node(arr[i]);
            q.push(current->left);
        }
        i++;

        if(i<arr.size() && arr[i] != -1) {
            current->right = new Node(arr[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}


int most_frequent_leaf(Node* root){
    if(!root){
         return -1;
    }

    unordered_map<int, int> freq;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* node = q.front(); q.pop();

        if(!node->left && !node->right){
            freq[node->value]++;
        }

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }

    int max_freq = 0, leaf_value = INT_MAX;
    for(auto& p : freq) {
        if (p.second > max_freq || (p.second == max_freq && p.first < leaf_value)) {
            max_freq = p.second;
            leaf_value = p.first;
        }
    }

    return leaf_value;
}

int main(){
    vector<int> arr;
    int x;
    while(cin >> x){
        arr.push_back(x);
    }

    Node* root = build_tree(arr);
    cout << most_frequent_leaf(root) << endl;

    return 0;
}