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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* secondTemp = head->next;
        while(first->next!=nullptr && second->next!=nullptr){
            if(first->next!=nullptr){
                first->next = first->next->next;
                first = first->next;
            }
            if(second->next!=nullptr){
                second->next = second->next->next;
                second = second->next;
            }
        }

        first->next = secondTemp;

        return head;
    }
};