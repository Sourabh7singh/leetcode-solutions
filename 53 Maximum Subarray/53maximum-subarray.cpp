class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        while(start<end){
            sum+=nums[start];
            maxi = max(maxi,sum);
            if(sum<0){
                sum= 0;
            }
            start++;
        }

        return maxi;
    }
};