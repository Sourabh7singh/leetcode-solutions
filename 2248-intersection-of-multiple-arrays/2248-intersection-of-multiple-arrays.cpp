class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mapping;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mapping[nums[i][j]]++;
            }
        }

        vector<int> res;
        for(auto i:mapping){
            if(i.second==nums.size()){
                res.push_back(i.first);
            }
        }
        return res;
    }
};