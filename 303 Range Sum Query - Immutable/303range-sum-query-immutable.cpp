class NumArray {
public:
vector<int> num;
    NumArray(vector<int>& nums) {
        num = nums;
    }
    
    int sumRange(int left, int right) {
        if(left<0 || right>num.size()-1){
            return -1;
        }
        int sum = 0;
        for(int i=left;i<=right;i++){
            sum+=num[i];
        }

        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */