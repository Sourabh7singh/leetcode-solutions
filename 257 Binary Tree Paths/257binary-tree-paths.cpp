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
    void solve(vector<string> &answer,string current,TreeNode* root){
        string localCurrent = current==""?to_string(root->val):current+"->"+to_string(root->val);

        if(root->left==nullptr&&root->right==nullptr){
            answer.push_back(localCurrent);
            return;
        }


        if(root->left){
            solve(answer,localCurrent,root->left);
        }

        if(root->right){
            solve(answer,localCurrent,root->right);
        }


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        string current = "";
        solve(answer,current,root);
        return answer;
    }
};