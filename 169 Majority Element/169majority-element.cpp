class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }

        for(auto i:mapping){
            if(i.second > (nums.size() /2 )) return i.first;
        }

        return -1;
    }
};