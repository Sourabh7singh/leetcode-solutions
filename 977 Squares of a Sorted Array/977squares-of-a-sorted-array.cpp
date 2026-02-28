class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0,end=nums.size()-1,n=nums.size();
        vector<int> answer(n);

        for(int i=n-1;i>=0;i--){
            if(abs(nums[start])>=abs(nums[end])){
                answer[i] = nums[start]*nums[start];
                start++;
            }else{
                answer[i] = nums[end]*nums[end];
                end--;
            }
        }

        return answer;
    }
};