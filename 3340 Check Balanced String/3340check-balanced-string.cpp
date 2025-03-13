class Solution {
public:
    bool isBalanced(string num) {
        if (num.size() == 1) {
            return false;
        }

        int oddSum = 0, evenSum = 0;

        for (size_t i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            i % 2 == 0 ? evenSum += digit : oddSum += digit;
            // if (i % 2 == 0) {
            //     evenSum += digit;
            // } else {
            //     oddSum += digit;
            // }
        }

        return oddSum == evenSum;
    }
};