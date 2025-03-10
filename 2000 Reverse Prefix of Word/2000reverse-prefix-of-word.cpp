class Solution {
public:
    string reversePrefix(string word, char ch) {
    int index = -1;
    for(int i=0;i<word.size();i++){
        if(ch==word[i]){
            index=i;
            break;
        }
    }

    if(index==-1){
        return word;
    }

    string newStr = "";
    for(int i=index;i>=0;i--){
        newStr = newStr + word[i];
    }

    for(int i=index+1;i<word.size();i++){
        newStr = newStr + word[i];
    }

    return newStr;

    }
};