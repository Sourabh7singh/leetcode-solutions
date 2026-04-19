class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> mapping;
        set<int> seen;
        vector<int> ans;
        int temp = 0,count=0;
        for(auto i:arr){
            temp = i;
            count = 0;
            while(temp != 0){
                temp = temp & (temp-1);
                count++;
            }
            
            if(seen.find(count)!=seen.end()){
                mapping[count].push_back(i);
            }else{
                mapping[count] = {i};
                seen.insert(count);
            }
        }


        for(auto i:mapping){
            sort(i.second.begin(), i.second.end()); 
            for(auto j:i.second){
                ans.push_back(j);
            }
        }
        
        return ans;
    }
};