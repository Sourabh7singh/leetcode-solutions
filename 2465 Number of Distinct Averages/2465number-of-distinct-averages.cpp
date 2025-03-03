
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<float , int> averages;
        int start = 0;
        int end = nums.size()-1;
        int count = 0;
        while(start<end){
            float a=(float(nums[start])+float(nums[end]))/2;
            averages[a]++;
            start++;
            end--;
        }

        return averages.size();
        
    }
};