#include<queue>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int start = 0;
    while(start<nums.size()){
        while(start<nums.size() && nums[start]!=0){
            start++;
        }

        int end = start;
        
        while(end<nums.size() && nums[end]==0){
            end++;
        }
        if(end<nums.size() && start<nums.size()){
            swap(nums[start],nums[end]);
        }
        start++;
    }   
    }
};