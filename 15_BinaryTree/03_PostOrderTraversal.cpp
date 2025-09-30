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



// PostOrder Traversal
void postOrderTraversal(Node* root){
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";

    return;
}



int main(){
    int idx = 0;
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = binaryTree(preOrder, idx);
    postOrderTraversal(root);
    return 0;
}