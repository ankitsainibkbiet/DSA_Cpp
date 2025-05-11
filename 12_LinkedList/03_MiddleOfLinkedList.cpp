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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int middle = 1;

        for(int i=0; temp->next != NULL; i++){
            temp = temp->next;
            middle++;
        }

        middle /= 2;
        temp = head;

        for(int i=0; i<middle; i++){
            temp = temp->next;
        }

        return temp;
    }
};