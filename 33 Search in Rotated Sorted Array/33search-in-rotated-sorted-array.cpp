class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;

        while(start<=end){
            // check for sorted half 
            int mid = (start + end)/2;

            if(nums[mid]==target) return mid;

            if(nums[start]<=nums[mid]){
                // left sorted
                if(nums[start]<=target && target<=nums[mid]){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }else{
                if(nums[mid]<=target && target<=nums[end]){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }

        return -1;
    }
};