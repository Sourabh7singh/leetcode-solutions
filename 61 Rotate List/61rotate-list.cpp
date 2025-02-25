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
int getLinkedListSize(ListNode* head){
    int size = 0;
    while(head!=nullptr){
        size++;
        head = head->next;
    }

    return size;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next == nullptr){
            return head;
        }

        int size = getLinkedListSize(head);
        if(k>size){
            k = k%size;
        }
        for(int i=0;i<k;i++){
            ListNode* fast = head;
            ListNode* slow;
            while(fast->next!=nullptr){
                slow = fast;
                fast = fast->next;
            }
            fast->next = head;
            slow->next = NULL;
            head = fast;
        }
        return head;
    }
};