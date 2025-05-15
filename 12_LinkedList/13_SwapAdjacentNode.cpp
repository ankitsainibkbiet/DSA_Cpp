#include <iostream>
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
    ListNode* swapPairs(ListNode* head) {
        // check valid adjacent node 
        int k = 2, curr = 0;
        ListNode* temp = head;
        while(curr < k){
            if(temp == NULL || head->next == NULL) return head; // base case 
            temp = temp->next;
            curr++;
        }

        // call for leftout list nodes
        ListNode* prevHead = swapPairs(temp);

        // reverse the first two adjacent nodes
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