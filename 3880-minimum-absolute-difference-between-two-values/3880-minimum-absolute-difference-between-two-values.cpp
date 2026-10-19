class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int max_diff = INT_MAX;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==1 && nums[j]==2){
                    max_diff = min(max_diff, abs(i-j));
                }
            }
        }

        return max_diff==INT_MAX ? -1 : max_diff;
    }
};