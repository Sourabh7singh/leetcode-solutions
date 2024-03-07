class Solution {
public:
    int bitwiseComplement(int n) {
        int mask=0,comp,num;
        if(n==0) return 1;
        num=n;
        while(num!=0){
            mask = (mask<<1)|1;
            num=num>>1;
        }
        comp = (~n)&mask;
        return comp;
    }
};