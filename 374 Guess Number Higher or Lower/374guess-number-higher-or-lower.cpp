/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int mid = start + (end-start)/2;
        int guessed_number;
        while(start<=end){
            guessed_number = guess(mid);
            if(guessed_number==0){
                break;
            }else if(guessed_number==1){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }

        return mid;
    }
};