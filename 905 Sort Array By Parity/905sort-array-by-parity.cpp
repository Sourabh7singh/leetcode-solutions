class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int evenPointer = 0;
        int oddPointer = nums.size() - 1;

        while(evenPointer<oddPointer){
            if(nums[evenPointer]%2==0){
                evenPointer++;
                continue;
            }
            
            
            if(nums[oddPointer]%2!=0){
                oddPointer--;
                continue;
            }
            
            swap(nums[evenPointer],nums[oddPointer]);
            oddPointer--;
            evenPointer++;
        }

        return nums;
    }

};