class Solution {
public:
    unordered_map<int,int> mapping;
    int climbStairs(int n) {
        if(n==0||n==1){
            return 1;
        }
        int n1 = mapping[n-1];
        int n2 = mapping[n-2];
        if(!n1){
            n1 = climbStairs(n-1);
            mapping[n-1] =n1;
        }
        if(!n2){
            n2 = climbStairs(n-2);
            mapping[n-2] =n2;
        }
        return n1+n2;
    }
};