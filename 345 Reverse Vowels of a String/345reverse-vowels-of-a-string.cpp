class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size()-1;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
        while(start<end){
            if(!vowels.count(s[start])){
                start++;
            }

            if(!vowels.count(s[end])){
                end--;
            }

            if(vowels.count(s[start]) && vowels.count(s[end])){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }

        return s;
    }
};