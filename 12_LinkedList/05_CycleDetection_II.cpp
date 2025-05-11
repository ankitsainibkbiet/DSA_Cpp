#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;  // this is important to preseve the meeting position 
            }
        }

        if(!isCycle) return NULL;

        slow = head;  // to detect the starting point of cyle 
        ListNode* prev = NULL; // to remove the cycle 

        while(slow != fast){
            prev = fast;
            fast = fast->next;
            slow = slow->next;
        }

        prev->next = NULL; // cycle has removed
        return slow;
    }
};