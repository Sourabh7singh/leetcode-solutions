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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(root==nullptr){
            return answer;
        }   

        queue<TreeNode*> qu;
        qu.push(root);
        bool leftToRight = true;
        while(!qu.empty()){
            int size = qu.size();
            vector<int> ans(size);
            // level processing 
            for(int i=0;i<size;i++){
                TreeNode* frontNode = qu.front();
                qu.pop();
                int index = leftToRight ? i : (size-i-1);
                ans[index] = frontNode->val;
                if(frontNode->left){
                    qu.push(frontNode->left);
                }
                if(frontNode->right){
                    qu.push(frontNode->right);
                }
            }
            leftToRight = !leftToRight;
            answer.push_back(ans);
        }

        return answer;
    }
};