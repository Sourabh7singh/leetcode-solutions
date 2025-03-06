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
    bool CheckLeftAndRightSubtree(TreeNode* root1,TreeNode* root2){
        if((root1==nullptr && root2==nullptr)){
            return true;
        }

        if((root1==nullptr && root2!=nullptr)||(root1!=nullptr&&root2==nullptr)){
            return false;
        }
        bool left = CheckLeftAndRightSubtree(root1->left,root2->right);
        bool right = CheckLeftAndRightSubtree(root1->right,root2->left);
        bool check2 = root1->val==root2->val;
        if(left && right &&check2){
            return true;
        }else{
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) { 
        TreeNode* root1 = root;
        TreeNode* root2 = root;
        bool check = CheckLeftAndRightSubtree(root1,root2);
        return check;
    }
};