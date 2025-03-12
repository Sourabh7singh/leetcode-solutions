class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        long long int start = 1;
        long long int end = num;
        long long int mid = (start+end)/2;
        while(start<end){
            long long int temp = mid*mid;
            if (temp==num){
                return true;
            }else if(temp>num){
                end = mid;
            }else{
                start = mid+1;
            }

            mid = (start+end)/2;
        }

        return false;
    }
};