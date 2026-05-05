class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool check = false;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                check = true;
                break;
            }
            s.insert(nums[i]);
        }

        return check;
    }   
};