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
void iterativeBFS(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode = q.front();

        if(q.front() == NULL){
            cout<<endl;
            q.pop();
            if(q.empty()) continue;
            q.push(NULL);
        }else{
            cout<<currNode->data<<" ";
            if(currNode->left) q.push(currNode->left);
            if(currNode->right) q.push(currNode->right);
            q.pop();
        } 
    }
}



int main(){
    int idx = 0;
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = binaryTree(preOrder, idx);
    iterativeBFS(root);
    return 0;
}