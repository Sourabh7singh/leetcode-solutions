class Solution {
public:

vector<int> productExceptSelf(vector<int>& nums) {
    int pre_product = 1, post_product = 1;
    int zero_count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            zero_count++;
        } else {
            post_product *= nums[i];
        }
    }

    vector<int> res(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        if (zero_count > 1) {
            res[i] = 0;
        }
        else if (zero_count == 1) {
            res[i] = (nums[i] == 0) ? post_product : 0;
        }
        else {
            post_product /= nums[i];
            res[i] = post_product * pre_product;
            pre_product *= nums[i];
        }
    }

    return res;
}

};