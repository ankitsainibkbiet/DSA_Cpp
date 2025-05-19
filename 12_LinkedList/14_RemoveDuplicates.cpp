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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* prev = head;
        ListNode* cur = head;

        while(cur != NULL){

            if(cur->next != NULL && cur->val == cur->next->val){
                while(cur->next != NULL && cur->val == cur->next->val){
                    cur = cur->next;
                }
                prev->next = cur->next;
                prev = prev->next;  // this is extra line which help to add one instance
            }else{
                prev = prev->next;
            }

            cur = cur->next;
        }

        return head;
    }
};