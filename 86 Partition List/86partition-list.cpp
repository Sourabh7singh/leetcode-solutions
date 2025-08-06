/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* newHead = new ListNode(-1);
        ListNode* pointer = newHead;
        while(temp!=nullptr){
            if(temp->val<x){
                int val = temp->val;
                ListNode* temp = new ListNode(val);
                pointer->next = temp;
                pointer = pointer->next; 

            }
            temp = temp->next;
        }
        temp = head;
        while(temp!=nullptr){
            if(temp->val>=x){
                int val = temp->val;
                ListNode* temp = new ListNode(val);
                pointer->next = temp;
                pointer = pointer->next; 

            }
            temp = temp->next;
        }
       

        return newHead->next;
    }
};