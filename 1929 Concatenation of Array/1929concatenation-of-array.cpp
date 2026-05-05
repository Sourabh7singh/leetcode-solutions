class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> answer(2*size);
        int start1 = 0,start2 = size,start=0;
        while(start1<size){
            answer[start1++] = nums[start];
            answer[start2++] = nums[start];
            start++;
        }

        return answer;
    }
};