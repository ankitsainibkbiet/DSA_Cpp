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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // check for k group 
        int curr = 0;
        ListNode* temp = head;
        while(curr < k){
            if(temp == NULL) return head;
            temp = temp->next;
            curr++;
        }

        // call for rest k groups of list
        ListNode* prevHead = reverseKGroup(temp, k);

        // revser the first k group nodes
        temp = head;
        curr = 0;
        ListNode* tempNext;
        while(curr < k){
            tempNext = temp->next;
            temp->next = prevHead;
            prevHead = temp;
            temp = tempNext;
            curr++;
        }

        return prevHead;
        
    }
};