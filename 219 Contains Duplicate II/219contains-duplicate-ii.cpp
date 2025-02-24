#include<map>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mapping;
        for(int i=0;i<nums.size();i++){
            if(mapping.find(nums[i]) != mapping.end()){
                int index = mapping[nums[i]];
                if(abs(i-index)<=k){
                    return true;
                }
            }
            mapping[nums[i]]=i;
        }
        return false;
    }
};