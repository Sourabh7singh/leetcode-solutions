class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNumber=nums[0];
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=1;i<nums.size();i++){
            singleNumber = (singleNumber ^ nums[i]);
        }

        return singleNumber;
    }
};