/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<map>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,ListNode*> mapping;
        ListNode* temp = headA;

        while (temp != nullptr) {
            mapping[temp] = temp->next;
            temp = temp->next;
        }

        temp = headB;
        while (temp != nullptr) {
            auto it = mapping.find(temp);
            if (it != mapping.end()) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;

        
    }
};