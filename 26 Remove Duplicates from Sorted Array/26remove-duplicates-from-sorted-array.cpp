class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 
        
        int current = nums[0];
        int left = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=current){
                nums[left++] = nums[i];
                current = nums[i];
            }
        }

        return left;
    }
};