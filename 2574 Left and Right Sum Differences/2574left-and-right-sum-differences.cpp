
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int postFixSum =0,preFixSum=0;
        int n = nums.size();
        vector<int> res;
        for(auto i:nums) postFixSum+=i;

        for(int i=0;i<n;i++){
            if(i==0){
                res.push_back(postFixSum - nums[i]);
            }else if(i==n-1){
                res.push_back(preFixSum);
            }else{
                int current_sum = abs(preFixSum - (postFixSum - nums[i]));
                res.push_back(current_sum);
            }
            preFixSum+=nums[i];
            postFixSum-=nums[i];
        }

        return res;
    }
};