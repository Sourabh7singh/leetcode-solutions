class Solution {
public:
    int squaredSum(int num){
        int rem = 0;
        int sq = 0;
        
        while(num>0){
            rem = num%10;
            sq+=(rem*rem);
            num = num/10;
        }

        return sq;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(seen.find(n)==seen.end()){
            seen.insert(n);
            n = squaredSum(n);
            if(n==1) break;
        }
        if(n==1){
            return true;
        }

        return false;
    }
};