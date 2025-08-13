class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};