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
    private:
    pair<int,int> diameterSearch(TreeNode* root){
        if(root==nullptr){
            pair<int,int> ans = make_pair(0,0);
            return ans;
        }

        pair<int,int> left = diameterSearch(root->left);
        pair<int,int> right = diameterSearch(root->right);
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second;

        pair<int,int> answer;
        answer.first = max(op1,max(op2,op3));
        answer.second = max(left.second , right.second) +1;
        return answer;


    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       return diameterSearch(root).first;
    }
};