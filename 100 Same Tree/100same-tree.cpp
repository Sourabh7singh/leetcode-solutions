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

class Solution {
public:
    void isSame(TreeNode* p, TreeNode* q, bool &check) {
        if (!check) {
            return;
        }
        if (p == NULL || q == NULL) {
            if (p != q) {
                check = false;
            }
            return;
        }
        if (p->val != q->val) {
            check = false;
            return;
        }
        isSame(p->left, q->left, check);
        isSame(p->right, q->right, check);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check = true;
        isSame(p,q,check);
        return check;
    }
};