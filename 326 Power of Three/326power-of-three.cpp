class Solution {
public:
    long long int powerof(long long int a,long long int b){
        if(b==1){
            return a;
        }

        if(b==0){
            return 1;
        }
    
        if(b%2==0){
            return powerof(a,b/2)*powerof(a,b/2); 
        }else{
            return a*powerof(a,b/2)*powerof(a,b/2); 
        }
    }
    bool isPowerOfThree(int n){
        long long int number = 1;
        long long int i = 0;
        long long int three = 3;
        bool isPower = false; 
        while(number<=n){
            number = powerof(three,i);
            if(number==n){
                isPower = true;
                break;
            }
            i++;
        }

        return isPower;
    }
};