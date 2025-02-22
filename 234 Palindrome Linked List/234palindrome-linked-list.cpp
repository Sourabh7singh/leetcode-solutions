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
#include<vector>

class Solution {
public:

void checkPallin(ListNode* &start,ListNode* end,bool &check){
    if (end->next!=nullptr){
        checkPallin(start,end->next,check);
    }

    if(check==false){
        return;
    }
    
    
    if(start->val!=end->val){
        cout<<"Compare: "<<start->val<<" and "<<end->val<<endl;
        check = false;
        return;
    }
    
    start=start->next;

    return;
}
    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        ListNode* end = head;
        bool check = true;
        checkPallin(start,end,check);
        return check;
    }
};