class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int leftsum = 0;
    int rightSum = 0;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        rightSum+=nums[i];
    }
    for(int i=0;i<nums.size();i++){
        int temp1 = nums[i]*i;
        int temp2 = nums[i]*(nums.size()-i-1);
        int l_sum = leftsum > temp1 ? leftsum - temp1 : temp1 - leftsum;
        int r_sum = rightSum>temp2 ? rightSum - temp2 : temp2 - rightSum;
        ans.push_back(l_sum + r_sum - nums[i]);
        leftsum+=nums[i];
        rightSum-=nums[i];
    }
        return ans;

        
    }
};