#include<stack>

class Solution {
public:
    stack<char> st;
    bool isValid(string s) {
        bool correct = true;
        if (s.size()==1){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                // opening braces
                st.push(s[i]);
            }else{
                // closing braces
                if(st.empty()){
                    correct = false;
                    break;
                }else{
                    char topvar = st.top();
                    if((topvar=='(' && s[i]==')') ||(topvar=='[' && s[i]==']')||(topvar=='{' && s[i]=='}')){
                        // valid currently
                        st.pop();
                    }else{
                        correct = false;
                        break;
                    }
                }
            }
        }

        if(st.size()!=0){
            correct=false;
        }

        return correct;
    }

};