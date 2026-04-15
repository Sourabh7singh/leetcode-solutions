class Solution {
public:
    bool isIsomorphic(string s, string t) {
    
    map<char,char> mapping1;
    map<char,char> mapping2;

    bool check = true;

    for(int i=0;i<s.size();i++){

        if(mapping1[s[i]] && mapping1[s[i]] != t[i]){
            return false;
        }

        
        if(mapping2[t[i]] && mapping2[t[i]] != s[i]){
            return false;
        }



        mapping1[s[i]] = t[i];
        mapping2[t[i]] = s[i];
    }


    return check;
}

};