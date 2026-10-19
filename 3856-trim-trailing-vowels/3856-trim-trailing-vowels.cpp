class Solution {
public:
    string trimTrailingVowels(string s) {
        stack<char> stac;
        unordered_set<char> mapping = {'a','e','i','o','u'};
        for(auto i:s) stac.push(i);

        while(
            !stac.empty() && 
            (mapping.find(stac.top())!=mapping.end())
        ){
            stac.pop();
        }
        string res = "";

        while(!stac.empty()){
            res = stac.top() + res;
            stac.pop();
        }

        return res;
    }
};