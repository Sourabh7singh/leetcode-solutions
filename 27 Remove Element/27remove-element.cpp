class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size() - 1;
        if (k == -1) return 0;

        for (int i = 0; i <= k; i++) {
            while (k >= 0 && nums[k] == val) {
                k--;
            }

            if (i > k) break;

            if (nums[i] == val) {
                swap(nums[i], nums[k]);
                k--;
                i--;
            }
        }

        return k + 1;
    }
};