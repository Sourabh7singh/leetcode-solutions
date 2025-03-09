class Solution {
public:

int getDigitSum(int num){
    int sum = 0;
    while(num>0){
        sum = sum + num%10;
        num = num/10;
    }
    return sum;
}

int getNumberOfDigits(int num){
    int sum = 0;
    while(num>0){
        num = num/10;
        sum++;
    }
    return sum;
}
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        int sum = 0;
        int digits = getNumberOfDigits(num);
        if(digits==1){
            return num;
        }
        while(digits!=1){
            int temp = getDigitSum(num);
            digits = getNumberOfDigits(temp);
            if(digits==1){
                sum = temp;
            }else{
                num = temp;
            }
        }

        return sum;
    }
};