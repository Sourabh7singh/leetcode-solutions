class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int last = nums.size()-1;
        int max_diff = max(abs(nums[0] - nums[last]),0);
        for(int i=0;i<last;i++){
            max_diff = max(max_diff, abs(nums[i]-nums[i+1]));
        }

        return max_diff;
    }
};