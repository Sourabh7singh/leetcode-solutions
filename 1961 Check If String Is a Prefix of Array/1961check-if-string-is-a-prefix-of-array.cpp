class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check;
        for(int i=0;i<words.size();i++){
            check+=words[i];
            if(check==s){
                return true;
            }
        }
        if(check==s){
            return true;
        }else{
            return false;
        }
    }
};