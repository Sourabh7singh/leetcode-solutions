class Solution {
public:
    bool check(vector<int>& nums) {
        int k=-1;
        for(int i =1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                k=i;
                break;
            }
        }

        if(k==-1) return true;

        for(int i = 1;i<nums.size();i++){
            if(nums[(i-1+k)%nums.size()]>nums[(i+k)%nums.size()]){
                return false;
            }
        }
        return true;
    }
};