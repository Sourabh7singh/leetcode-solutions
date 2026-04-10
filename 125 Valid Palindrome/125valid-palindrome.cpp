class Solution {
    private:
    bool isValid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
    char tolowercase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else{
            char temp = ch-'A'+'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(isValid(s[i])){
                temp += tolowercase(s[i]);
            }
        }
        int start = 0;
        int end = temp.length()-1;
        while(start<end){
            if(temp[start++]!=temp[end--]){
                return false;
            }
        }
        return true;
    }
};