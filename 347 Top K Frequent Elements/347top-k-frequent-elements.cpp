class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mapping;
        for(auto i:nums){
            mapping[i]+=1;  
        }
        vector<int> res;

        for(int i=1;i<=k;i++){
            int max_key = -1,max_val=-1;
            for(auto i:mapping){
                if(i.second>max_val){
                    max_key= i.first;
                    max_val=i.second;
                }
            }
            res.push_back(max_key);
            mapping.erase(max_key);
        }

        return res;
    }
};