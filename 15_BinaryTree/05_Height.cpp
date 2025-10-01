#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Binary Tree Formation
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        right = left = NULL;
    }
};

Node* binaryTree(vector<int> preOrder, int& idx){
    if(preOrder[idx] == -1) return NULL;

    Node* root = new Node(preOrder[idx]);
    root->left = binaryTree(preOrder, ++idx);
    root->right = binaryTree(preOrder, ++idx);

    return root;
}



// Iterative BFS Traversal
int iterativeBFS(Node* root){
    int count = 0;
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode = q.front();

        if(currNode == NULL){
            q.pop();
            count++;
            if(q.empty()) continue;
            q.push(NULL);
        }else{
            if(currNode->left) q.push(currNode->left);
            if(currNode->right) q.push(currNode->right);
            q.pop();
        }
    }

    return count;
}



int main(){
    int idx = 0;
    vector<int> preOrder = {1,2,-1,-1,-1};
    Node* root = binaryTree(preOrder, idx);
    cout<<iterativeBFS(root);
    return 0;
}