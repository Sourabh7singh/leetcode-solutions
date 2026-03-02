class Solution {
public:
int findContentChildren(vector<int>& g, vector<int>& s) {
    map<int,int> mapping;
    for(int i=0;i<s.size();i++){
        mapping[s[i]]+=1;
    }
    int count = 0;
    int greed_pointer = 0;
    int cookie_pointer = 0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    while(greed_pointer<g.size() && cookie_pointer<s.size()){
        if(g[greed_pointer]>s[cookie_pointer]){
            cookie_pointer++;
        }
        else{
            count++;
            cookie_pointer++;
            greed_pointer++;
        }
    }

    return count;
}

};