class Solution {
public:
    string conversion(int num,int base){    
        int n = 0;
        string converted = "";
        while(num>0){
            int temp = num%base;
            if(temp>9){
                temp = temp - 10;
                converted = char(65+temp) + converted;
            }else{
                converted = to_string(temp) + converted;
            }
            num = num/base;
        }
        return converted;
    }

    string concatHex36(int n) {
        return conversion(n*n,16) + conversion(n*n*n,36);
    }
};