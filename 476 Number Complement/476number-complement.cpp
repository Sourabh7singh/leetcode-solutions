class Solution {
public:
    int findComplement(int num) {
        int mask=0,m;
        m=num;
        if(num==0) return 1;
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        int comp = (~num)&mask;
        return comp;
    }
};