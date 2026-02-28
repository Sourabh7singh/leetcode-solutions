class Solution {
public:
    
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evenPointer = 0;
        int oddPointer = 1;
        int last = nums.size();

        while(evenPointer<last && oddPointer<last){
            if(nums[evenPointer]%2==0) {
                evenPointer+=2;
                continue;
            }

            else if(nums[oddPointer]%2) {
                oddPointer+=2;
                continue;
            }else{
                swap(nums[evenPointer], nums[oddPointer]);
                evenPointer+=2;
                oddPointer+=2;
            }
        }

        return nums;
    }
};