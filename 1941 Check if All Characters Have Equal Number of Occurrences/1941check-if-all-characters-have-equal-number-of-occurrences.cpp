class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mapping;
        for (char c : s) {
            mapping[c]++;
        }

        int commonCount = mapping.begin()->second;
        for(auto i:mapping){
            if(commonCount!=i.second){
                return false;
            }
        }

        return true;
    }
};