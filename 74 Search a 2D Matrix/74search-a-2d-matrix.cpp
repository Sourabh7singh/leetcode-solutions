class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = ((matrix.size())*(matrix[0].size()))-1;
        int col = matrix[0].size();
        int mid = (start+end)/2;
        while(start<=end){
            int element = matrix[mid/col][mid%col];
            if (target==element){
                return 1;
            }
            else if(target<element){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = (start+end)/2;
        }
        return 0;
    }
};