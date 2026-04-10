class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;
        int min_element = INT_MAX;
        while(start<=end){
            if(nums[start]<=nums[mid]){
                // left is sorted
                min_element = min(min_element,nums[start]);
                start = mid+1;
            }else{
                // right is sorted
                min_element = min(min_element,nums[mid]);
                end = mid-1;

            }
            mid = start + (end - start)/2;
        }
        return min_element;
    }
};