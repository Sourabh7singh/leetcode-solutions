class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string solution;
        string temp;
        bool isnegative = false;
        if(num<0){
            num = abs(num);
            isnegative = true;
        }
        while(num>0){
            int rem = num%7;
            num = num/7;
            solution.push_back(rem+'0');
        }

        while(!solution.empty()){
            temp.push_back(solution.back());
            solution.pop_back();
        }

        return isnegative ? '-' + temp : temp ;
    }
};