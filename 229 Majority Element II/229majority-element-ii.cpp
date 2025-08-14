class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        vector<int> ans;
        for(auto i:mapping){
            if(i.second>(nums.size()/3)){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};