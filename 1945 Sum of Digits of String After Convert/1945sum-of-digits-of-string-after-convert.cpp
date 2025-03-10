class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";
        for (char c : s) {
            numStr += to_string(c - 'a' + 1);
        }
        long long digitSum = 0;
        for (char c : numStr) {
            digitSum += (c - '0');
        }
        for(int i=1;i<k;i++){
            long long temp = 0;
            while(digitSum>0){
                temp = temp + digitSum%10;
                digitSum = digitSum/10;
            }
            digitSum = temp;
        }

        return digitSum;
    }
};