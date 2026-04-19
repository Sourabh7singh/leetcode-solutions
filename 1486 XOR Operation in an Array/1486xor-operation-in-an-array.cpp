class Solution {
public:
    int xorOperation(int n, int start) {
        int num = start;
        for(int i=1;i<n;i++){
            num = num ^ (start + (2*i));
        }

        return num;

    }
};