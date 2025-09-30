#include<iostream>
#include<vector>
using namespace std;

// Binary Tree Formation
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* binaryTree(vector<int> preOrder){
    idx++;

    if(preOrder[idx] == -1) return NULL;

    Node* root = new Node(preOrder[idx]);
    root->left = binaryTree(preOrder);
    root->right = binaryTree(preOrder);

    return root;
}



// InOrder Traversal
void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

    return;
}



int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = binaryTree(preOrder);
    inOrderTraversal(root);
    return 0;
}