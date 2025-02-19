/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include<stack>

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> solutions;
    stack<TreeNode*> st;
    TreeNode* temp = root;

    while (temp != NULL || !st.empty()) {
        
        while (temp != NULL) {
            st.push(temp);
            temp = temp->left;
        }

        // Process current node
        temp = st.top();
        st.pop();
        solutions.push_back(temp->val);

        // Process right subtree
        temp = temp->right;
    }

    return solutions;
}
};