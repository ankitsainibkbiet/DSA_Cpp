#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return NULL;

        Node* temp = head;
        while(temp != NULL){
            if(temp->child != NULL){
                Node* tempNext = temp->next;
                temp->next = flatten(temp->child);
                temp->next->prev = temp;
                temp->child = NULL;  // important to delete the child nodes

                while(temp->next != NULL){
                    temp = temp->next;
                }
                
                if(tempNext != NULL){  // maybe the tempNext did not exist 
                    temp->next = tempNext;
                    tempNext->prev = temp;
                } 
            }
            temp = temp->next;
        }
        return head;
    }
};