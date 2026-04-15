class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mapping;
        vector<int> res = {-1,-1};

        for(int i=1;i<=nums.size();i++){
            mapping[i]++;
        }
        for(auto i:nums){
            mapping[i]++;
        }
        
        for(auto i:mapping){
            if(i.second==1) res[1] = i.first;
            else if(i.second>2) res[0] = i.first;
        }

        return res;
    }
};