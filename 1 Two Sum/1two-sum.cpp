class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> s;
        unordered_map<int,int> m;

        vector<int> ans = {-1,-1};
        for(int i=0;i<nums.size();i++){
            int key = target - nums[i];
            if(m.find(key)!=m.end()){
                ans[0] = i;
                ans[1] = m[key];
            }
            m[nums[i]] = i;
        }

        return ans;
    }
};