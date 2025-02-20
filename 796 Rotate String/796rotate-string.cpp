class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        int counter = 0;
        int maxRotations = s.size()-1;
        int size = s.size();
        bool isPossible = false;
        while(maxRotations>0){
            s = s.substr(1,size-1) + s.substr(0,1);
            if(s==goal){
                isPossible = true;
                break;
            }
            maxRotations--;
        }

        return isPossible;
    }
};