// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int mid = end + (start-end)/2;
        int bad = -1;
        while(start<=end){
            bool check = isBadVersion(mid);
            if(check){
                end = mid-1;
                bad = mid;
            }else{
                start = mid+1;
            }
            mid = end + (start-end)/2;
        }

        return  bad;
    }
};