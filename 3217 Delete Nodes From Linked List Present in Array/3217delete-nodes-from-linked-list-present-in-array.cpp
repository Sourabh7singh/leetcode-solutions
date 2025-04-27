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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> mapping;
        for(auto i:nums){
            mapping.insert(i);
        }
        ListNode* dummy = new ListNode(0, head);
        ListNode* current = head;
        ListNode* prev = dummy;
        while(current!=nullptr){
            if(mapping.find(current->val)!=mapping.end()){
                prev->next = current->next;
            }else{
                prev = current;
            }
            current = current->next;
        }

        return dummy->next;
    }
};