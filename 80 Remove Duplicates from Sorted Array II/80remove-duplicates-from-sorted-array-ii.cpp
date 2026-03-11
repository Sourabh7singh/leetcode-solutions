class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = nums[0];
        int left = 1;
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==current && count<2){
                nums[left++] = nums[i];
                count++;
            }
            else if(nums[i]!=current){
                nums[left++] = nums[i];
                current = nums[i];
                count =1;
            }
        }
        return left;
    }
};