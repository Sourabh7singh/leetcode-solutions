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
pair<bool,int> solve(TreeNode* root){
    if(root==nullptr){
        pair<bool,int> ans = make_pair(true,0);
        return ans;
    }

    pair<bool,int> left = solve(root->left);
    pair<bool,int> right = solve(root->right);

    int heightLeft = left.second;
    int heightRight = right.second;

    bool diff = abs(heightLeft-heightRight)<=1;
    pair<bool,int> answer;
    answer.second = max(heightLeft,heightRight)+1;
    if(left.first&&right.first&&diff){
        answer.first = true;
    }else{
        answer.first = false;
    }

    return answer;
}
    bool isBalanced(TreeNode* root) {
        pair<bool,int> answer = solve(root);
        return answer.first;

    }
};