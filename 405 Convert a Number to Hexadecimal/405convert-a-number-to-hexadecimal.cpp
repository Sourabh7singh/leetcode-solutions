class Solution {
public:
    string toHex(int n) {
        string converted = "";
        int base = 16;
        if(n == 0) return "0";
        unsigned int num = n;
        while(num>0){
            int temp = num%base;
            if(temp>9){
                temp = temp - 10;
                converted = char(97+temp) + converted;
            }else{
                converted = to_string(temp) + converted;
            }
            num = num/base;
        }
        return converted;
    }
};