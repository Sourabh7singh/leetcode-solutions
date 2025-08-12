class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = i;
        while(j<s.size()){
            int c = s[j];
            if(c==32){
                int start = i;
                int end = j-1;
                while(start<end){
                    swap(s[start++],s[end--]);
                }
                i = j+1;
            }
            j++;
        }
        if(i<s.size()){
            int start = i;
            int end = j-1;
            while(start<end){
                swap(s[start++],s[end--]);
            }
            i = j+1;
        }
        return s;    
    }
};