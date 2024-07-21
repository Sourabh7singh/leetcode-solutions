class Solution {
public:
    int countPrimes(int n) {
        vector<int> res(n,true);
        if (n <= 2) return 0;
        res[0]=res[1]=false;
        int count=0;
        for(int i =2;i<n;i++){
            if(res[i]){
                count++;
                for(int j=2*i;j<n;j+=i){
                    res[j] = false;
                }
            }
        }
        return count;
    }
};