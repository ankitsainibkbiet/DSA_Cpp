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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* temp = NULL;
        ListNode* head = NULL;
        bool changeHead = true;

        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                ListNode* newNode = new ListNode(list1->val);
                if(changeHead){
                    head = newNode;
                    temp = newNode;
                    changeHead = false;
                    list1 = list1->next;
                }else{
                    temp->next = newNode;
                    temp = temp->next;
                    list1 = list1->next;
                }
            }else{
                ListNode* newNode = new ListNode(list2->val);
                if(changeHead){
                    head = newNode;
                    temp = newNode;
                    changeHead = false;
                    list2 = list2->next;
                }else{
                    temp->next = newNode;
                    temp = temp->next;
                    list2 = list2->next;
                }
            }
        }

        while(list1 != NULL){
            ListNode* newNode = new ListNode(list1->val);
            if(!changeHead){
                temp->next = newNode;
                temp = temp->next;
                list1 = list1->next;
            }else{
                head = newNode;
                temp = newNode;
                list1 = list1->next;
                changeHead = false;
            }
        }

        while(list2 != NULL){
            ListNode* newNode = new ListNode(list2->val);
            if(!changeHead){
                temp->next = newNode;
                temp = temp->next;
                list2 = list2->next;
            }else{
                head = newNode;
                temp = newNode;
                list2 = list2->next;
                changeHead = false;
            }
        }

        return head;
    }
};