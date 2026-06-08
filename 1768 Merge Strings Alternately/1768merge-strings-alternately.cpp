class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int start1 = 0,start2 = 0;
        string res;
        while(start1<word1.size() && start2<word2.size()){
            res.push_back(word1[start1++]);
            res.push_back(word2[start2++]);
        }

        while(start2<word2.size()){
            res.push_back(word2[start2++]);
        }

        while(start1<word1.size()){
            res.push_back(word1[start1++]);
        }

        return res;
    }
};