class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mapping;
        for(int i=0;i<strs.size();i++){
            string current = strs[i];
            sort(current.begin(),current.end());
            if(mapping.find(current)!=mapping.end()){
                vector<string> existing = mapping[current];
                existing.push_back(strs[i]);
                mapping[current] = existing;
            }else{
                // missing
                mapping[current] = {strs[i]};
            }
        }
        vector<vector<string>> answer;
        for(auto i:mapping){
            answer.push_back(i.second);
        }
        return answer;
    }
};