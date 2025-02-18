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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* second = head;
        while (second!= nullptr && second->next != nullptr) {
            if (second->next->val == val) {
                ListNode* temp = second->next;
                second->next = second->next->next;
                delete temp;
            } else {
                second = second->next;
            }
        }

        return head;

    }
};