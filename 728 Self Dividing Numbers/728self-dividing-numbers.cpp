class Solution {
public:
    bool checkIsSelfDividing(int number){
        int temp = number;

        while(temp>0){
            int rem = temp%10;
            if(rem==0 || (number%rem)!=0) return false;
            temp = temp/10;
        }

        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        
        for(int i=left;i<=right;i++){
            if(this->checkIsSelfDividing(i)){
                res.push_back(i);
            }
        }

        return res;
    }
};