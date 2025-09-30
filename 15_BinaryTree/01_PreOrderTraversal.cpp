#include<iostream>
#include<vector>
using namespace std;

// Binary Tree Formation
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
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



// PreOrder Traversal
void preOrderTraversal(Node* root){
    if(root == NULL){
        cout<<-1<<" ";
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

    return;
}



int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* r = binaryTree(preOrder);
    preOrderTraversal(r);
    return 0;
}