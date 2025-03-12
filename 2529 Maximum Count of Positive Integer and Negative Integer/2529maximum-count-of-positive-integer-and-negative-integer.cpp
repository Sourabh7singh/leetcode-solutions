class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int negativeindex = -1;
        int positiveindex = -1;
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(nums[mid]<0){
                negativeindex = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        start = 0;
        end = nums.size()-1;

        while(start<=end){
            int mid = start + (end - start) / 2;
            if(nums[mid]>0){
                positiveindex = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        int positiveCount = (positiveindex == -1) ? 0 : nums.size() - positiveindex;
        int negativeCount = negativeindex + 1;

        return max(positiveCount, negativeCount);

    }
};