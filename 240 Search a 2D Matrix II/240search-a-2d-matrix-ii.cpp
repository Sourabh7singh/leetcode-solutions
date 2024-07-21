class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int StartRow = 0;
        int StartCol = matrix[0].size() - 1;

        while (StartRow < matrix.size() && StartCol >= 0) {
            if (target == matrix[StartRow][StartCol]) {
                return true;
            } else if (target < matrix[StartRow][StartCol]) {
                StartCol--;
            } else {
                StartRow++;
            }
        }

        return false;
    }
};