class Solution {
public:
    bool hasAlternatingBits(int n) {
        int currentBit = n&1;
        while(n!=0){
            if((n&1) != currentBit) return false;
            currentBit = !currentBit;
            n = n >> 1;
        }
        return true;
    }
};