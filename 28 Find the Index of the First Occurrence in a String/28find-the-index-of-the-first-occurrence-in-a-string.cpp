class Solution {
public:
    int strStr(string haystack, string needle) {
        int initIndex = -1;
        if(haystack==needle){
            return 0;
        }
        if(haystack.size()<needle.size()){
            return -1;
        }
        for(int i=0;i<haystack.size()-needle.size();i++){
            int starting = i;
            int ending = needle.size();
            if(haystack.substr(starting,ending)==needle){
                initIndex = i;
                return i;
            }
        }
        
        if(initIndex ==-1 && haystack.substr(haystack.size()-needle.size(),needle.size())==needle){
            initIndex = haystack.size()-needle.size();
        }
        return initIndex;
    }
};