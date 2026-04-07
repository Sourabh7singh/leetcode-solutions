class Solution {
public:

char nextGreatestLetter(vector<char>& letters, char target) {
    int ind = -1,start=0,end=letters.size()-1,mid = (end + (start-end)/2);
        while(start<=end){
            if(letters[mid]>target){
                ind = mid;
                end=mid-1;
            }else{
                start = mid+1;
            }
            mid = (end + (start-end)/2);
        }

        return ind!=-1? letters[ind] : letters[0];
    }

};