
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mapping;

        for(int i=0;i<s.size();i++){
            mapping[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            mapping[t[i]]--;
        }

        for(auto i:mapping){
            if(i.second!=0){
                return false;
            }
        }

        return true;
    }
};
