class Solution {
public:
    string addBinary(string a, string b) {
        int firstPointer = a.size()-1;
        int secondPointer = b.size()-1;
        string result = "";
        char carry='0';
        while(firstPointer>=0 && secondPointer>=0){
        if(a[firstPointer]=='1' && b[secondPointer]=='1'){
            //Both are 1
            if(carry=='1'){
                result = "1" + result;
            }else{
                result = "0" + result;
            }
            carry = '1';
            
        }else if(a[firstPointer]=='0' && b[secondPointer]=='0'){
            //both are 0
            if(carry=='1'){
                result  = '1' + result;
            }else{
                result  = '0' + result;
            }
            carry='0';
        }else{
            //one is zero and anther is 1
            if(carry=='1'){
                result  = '0' + result;
                carry='1';
            }else{
                result  = '1' + result;
            }
        }

        firstPointer --;
        secondPointer --;
    }

    while(firstPointer>=0){
        cout<<"first";
        if(a[firstPointer]=='0'){
            if(carry=='1'){
                result = "1" + result;
                carry = '0';
            }else{
                result = "0" + result;
            }
        }else{
            if(carry=='1'){
                result = "0" + result;
                carry = '1';
            }else{
                result = "1" + result;
            }
        }
        firstPointer --;
    }

    while(secondPointer>=0){
        if(b[secondPointer]=='0'){
            if(carry=='1'){
                result = "1" + result;
                carry = '0';
            }else{
                result = "0" + result;
            }
        }else{
            if(carry=='1'){
                result = "0" + result;
                carry = '1';
            }else{
                result = "1" + result;
            }
        }
        secondPointer --;
    }

    if(carry=='1'){
        result = carry+result;
    }

        return result;
    }
};