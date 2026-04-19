class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;

        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }

        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left;i<=right;i++){
            int countBits = 0;
            int temp = i;
            while(temp!=0){
                temp = temp & (temp-1);
                countBits++;
            }

            if(isPrime(countBits)) count++;
        }

        return count;
    }
};