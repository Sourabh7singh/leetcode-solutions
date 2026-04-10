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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int carry = 0;
            ListNode* dummy = new ListNode(0);
            ListNode* current = dummy;
            while (l1!=NULL && l2!=NULL)
            {
                int num1 = (l1 != NULL) ? l1->val : 0;
                int num2 = (l2 != NULL) ? l2->val : 0;
                int res = num1+num2+carry;
                carry = res/10;
                int rem = res%10;
                current->next = new ListNode(rem);
                current = current->next;
                if(l1){
                    l1=l1->next;
                }
                if(l2){
                    l2=l2->next;
                }
            }

            while (l1!=NULL){
                int num = l1->val;
                int res = num+carry;
                carry = res/10;
                int rem = res%10;
                current->next = new ListNode(rem);
                current = current->next;
                l1=l1->next;
            }
            
            while (l2!=NULL){
                int num = l2->val;
                int res = num+carry;
                carry = res/10;
                int rem = res%10;
                current->next = new ListNode(rem);
                current = current->next;
                l2=l2->next;
            }

            if(carry!=0){
                current->next = new ListNode(carry);
                current = current->next;
            }

            return dummy->next;
        }
};