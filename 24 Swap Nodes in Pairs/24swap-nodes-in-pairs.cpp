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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next == nullptr) return head;
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* newhead = head->next;
        ListNode* prevTail = nullptr;
        while(first && second){
            first->next = second->next;
            second->next = first;
            if(prevTail==nullptr){
                prevTail = second;
            }else{
                prevTail->next = second;
            }
            prevTail = first;
            first = first->next;
            if(first) second = first->next;

        }

        return newhead;

    }
};