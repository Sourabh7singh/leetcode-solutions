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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(INT_MIN);
        ListNode* dummyhead = dummy;
        ListNode* temp = head;
        int toBeIgnored = INT_MIN;
        while(temp!=nullptr){
            if(temp->next && (temp->val==temp->next->val)){
                toBeIgnored = temp->val;
            }else{
                if(temp->val!=toBeIgnored){
                    int val = temp->val;
                    ListNode* temp = new ListNode(val);
                    dummyhead->next = temp;
                    dummyhead = dummyhead->next;
                }
            }
            temp = temp->next;
        }

        return dummy->next;
    }
};