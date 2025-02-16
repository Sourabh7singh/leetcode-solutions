class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        for(int i = digits.size()-1;i>=0;i--){
            cout<<"digits "<<digits[i]<<endl;
            int number = digits[i];
            if(i==digits.size()-1){
                number = number + 1 ;
            }
            cout<<"number: "<<number;
            number = number + carry;
            carry = number/10;
            int remainder = number%10;
            digits[i]=remainder;
        }

        if (carry){
            cout<<"carry: "<<carry;
            digits.insert(digits.begin()+0,carry);
        }

        return digits;

        // long long int num = 0;
        // long long int mask = 1;
        // vector<int> copy_digits;
        // int original_length = digits.size();
        // for(int i=0;i<digits.size();i++){
        //     num = num*10 + digits[i];
        //     mask = mask*10;
        // }
        // mask = mask/10;
        // num = num + 1;
        // int new_length = 0;
        // long long int temp = num;
        // while (temp > 0) {
        //     temp /= 10;
        //     new_length++;
        // }
        // if(original_length!=new_length){
        //     mask = mask*10;
        // }
        // cout<<"mask is: "<<mask;
        // while(num>0){
        //     int rem = num/mask;
        //     num = num%mask;
        //     mask = mask/10;
        //     copy_digits.push_back(rem);
        // }
        
        // return copy_digits;
    }
};