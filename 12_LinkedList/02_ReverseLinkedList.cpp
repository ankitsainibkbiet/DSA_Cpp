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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;

        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* n = NULL;

        while(cur != NULL){
            n = cur->next;
            cur->next = prev;
            prev = cur;
            cur = n;
        } 

        return prev;
    }
};