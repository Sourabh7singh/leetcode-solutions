class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int missing = -1, repeating = -1;
        int size = grid.size();
        int n = size*size;
        for(int temp=1;temp<=n;temp++){
            mp[temp] = 0;
        }

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        for(auto num:mp){
            if (num.second==0 && missing==-1) missing = num.first;
            if (num.second>1 && repeating==-1) repeating = num.first;
        }

        return {repeating,missing};
    }
};