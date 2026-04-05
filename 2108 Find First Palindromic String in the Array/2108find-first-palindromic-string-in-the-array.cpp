class Solution {
public:
    bool checkPalindrome(string word){
        int start=0,end=word.size()-1;
        while(start<=end){
            if(word[start++]!=word[end--]){
                return false;
            }
        }

        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(checkPalindrome(words[i])){
                return words[i];
            }
        }

        return "";
    }
};