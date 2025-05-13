#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
  
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        // make newList;
        ListNode* temp2 = NULL;  
        ListNode* newHead = NULL;
        ListNode* temp1 = head;

        ListNode* newNode = new ListNode(temp1->val);
        temp2 = newNode;
        newHead = newNode;
        temp1 = temp1->next;

        while(temp1 != NULL){ 
            ListNode* newNode = new ListNode(temp1->val);
            temp2->next = newNode;
            temp2 = temp2->next;   
            temp1 = temp1->next;         
        }
        
        // reverse the original List
        ListNode* prev = NULL;  
        ListNode* curr = head;
        ListNode* currNext = NULL;

        while(curr != NULL){  
            currNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = currNext;
        }

        // check palindrom by comparing both 
        ListNode* temp = newHead;  
        while(prev != NULL){
            if(prev->val != temp->val){
                return false;
            }
            temp = temp->next;
            prev = prev->next;
        }
        
        return true;

    }
};