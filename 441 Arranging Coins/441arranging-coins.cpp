class Solution {
public:
    int arrangeCoins(int n) {
        int counter =0;
        for(int i=1;i<=n;i++){
            if(n<=0) break;
            n-=i;
            counter+=1;
            
        }
        return counter;
    }
};
