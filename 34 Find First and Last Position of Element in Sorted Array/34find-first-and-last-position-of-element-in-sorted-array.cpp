class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_position=-1,last_position=-1,start=0,end=nums.size()-1;
        int mid = end + ((start-end)/2);
        while(start<=end){
            if(nums[mid]==target){
                first_position = mid;
                end = mid-1;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = end + ((start-end)/2);
        }

        start = 0;
        end = nums.size() - 1;
        mid = end + ((start-end)/2);

        while(start<=end){
            if(nums[mid]==target){
                last_position = mid;
                start = mid+1;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = end + ((start-end)/2);
        }

        return {first_position,last_position};
    }
};