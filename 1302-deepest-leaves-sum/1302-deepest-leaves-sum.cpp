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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> solution;
        deque<TreeNode *> next_elements;
        deque<TreeNode *> processing;

        processing.push_back(root);
        processing.push_back(NULL);

        while (!processing.empty())
        {
            TreeNode *node = processing[0];
            processing.pop_front();

            if (node == NULL)
            {
                ans.push_back(solution);
                solution.clear();
            }
            else
            {
                solution.push_back(node->val);
            }

            if (processing.empty())
            {
                while (!next_elements.empty())
                {
                    processing.push_back(next_elements[0]);
                    next_elements.pop_front();
                }
                if (!processing.empty())
                {
                    processing.push_back(NULL);
                }
            }

            if (node != NULL && node->left != NULL)
                next_elements.push_back(node->left);
            if (node != NULL && node->right != NULL)
                next_elements.push_back(node->right);
        }


        solution = ans[ans.size() - 1];
        int sum = 0;
        for(auto i:solution) sum+=i;
        return sum;
    }
};