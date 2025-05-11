#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        unordered_map<Node*, Node*> m;

        Node* newHead = new Node(head->val);
        m[head] = newHead;  // store every proportional node for original and copy
        Node* oldTemp = head->next;
        Node* copyTemp = newHead;

        while(oldTemp != NULL){
            Node* newNode = new Node(oldTemp->val);
            copyTemp->next = newNode;
            copyTemp = copyTemp->next;
            m[oldTemp] = copyTemp;  // to make oldTemp and copyTemp position same fix this step here
            oldTemp = oldTemp->next;
        }

        oldTemp = head;
        copyTemp = newHead;

        while(oldTemp != NULL){
            copyTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            copyTemp = copyTemp->next;
        }

        return newHead;
    }
};