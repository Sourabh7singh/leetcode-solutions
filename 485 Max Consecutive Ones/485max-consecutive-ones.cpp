class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_occurences = INT_MIN;
        int localCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                localCount++;
            }else{
                max_occurences = max(max_occurences,localCount);
                localCount=0;
            }
        } 
        max_occurences = max(max_occurences,localCount);

        return max_occurences;
    }
};