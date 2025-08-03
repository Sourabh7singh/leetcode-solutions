class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int longest =1;
        int cnt = 0;
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                cnt = 1;
                while(s.find(it+1)!=s.end()){
                    cnt++;
                    it = it+1;
                }
                longest = max(longest,cnt);
            }
        }

        return longest;
    }
};