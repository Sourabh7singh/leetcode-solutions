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

void RecurseNthNode(ListNode* &head,ListNode* &prev,ListNode* &next,int &n){
    if(next==nullptr){
        return;
    } 
    
    RecurseNthNode(head,prev->next,next->next,n);
    n--;
    
    if(n==0){
        prev->next = next ? next->next : nullptr; 
    }
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0, head);
    RecurseNthNode(dummy, dummy, head, n);
    return dummy->next;
}

};