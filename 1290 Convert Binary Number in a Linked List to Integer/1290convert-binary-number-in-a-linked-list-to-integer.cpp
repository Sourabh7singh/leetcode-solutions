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
#include<cmath>
class Solution {
public:
    void Recurse(ListNode* head,int power,int &result){
        if(head==nullptr) return;
        power = power - 1;
        Recurse(head->next,power,result);
        if(head->val!=0){
            result= result + pow(2,power+1);
        }

    }
    int getDecimalValue(ListNode* head) {
        int result = 0;
        int power = 0;
        int length = -1;
        ListNode* temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }
        Recurse(head,length,result);
        return result;
    }
};