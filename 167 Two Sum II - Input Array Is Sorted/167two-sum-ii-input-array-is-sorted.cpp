class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans = {-1,-1};
        int low = 0,high = numbers.size()-1;
        while(low<=high){
            int expected = numbers[low] + numbers[high];
            if(expected == target){
                ans[0] = low+1;
                ans[1] = high+1;
                break;
            } 

            else if(expected < target)low++;
            else high--;
        }

        return ans;


    }
};