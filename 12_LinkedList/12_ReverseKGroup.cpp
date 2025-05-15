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
        int curr = 0;
        ListNode* temp = head;
        while(curr < k){
            if(temp == NULL) return head;
            temp = temp->next;
            curr++;
        }

        ListNode* prevHead = reverseKGroup(temp, k);

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