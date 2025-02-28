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
#include<stack>
class Solution {
public:
void BackTrack(ListNode* head, stack<int>& solution, stack<int>& st) {
    if (head == nullptr) return;  

    BackTrack(head->next, solution, st);

    while (!st.empty() && st.top() <= head->val) {
        st.pop();
    }
    if (!st.empty()) {
        solution.push(st.top());
    } else {
        solution.push(0);
    }
    st.push(head->val);
}
    vector<int> nextLargerNodes(ListNode* head) { 
        stack<int> solution;
        stack<int> st;
        vector<int> solutions;
        BackTrack(head,solution,st);
        while(!solution.empty()){
            solutions.push_back(solution.top());
            solution.pop();
        }
        return solutions;
    }
};