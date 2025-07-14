class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
    unordered_set<string> possibleBusinessLines = {"electronics", "grocery", "pharmacy", "restaurant"};
    vector<string> el;
    vector<string> gr;
    vector<string> ph;
    vector<string> res;
    
    vector<string> solutions;
    for(int i=0;i<code.size();i++){
        if(isActive[i]==true && (possibleBusinessLines.find(businessLine[i])!=possibleBusinessLines.end())){
            string item = code[i];
            if(item.size()==0) continue;
            int count = 0;
            for(int k = 0;k<item.size();k++){
                int itemcode = item[k];
                if(isdigit(item[k]) || (itemcode>=65 && itemcode<=90) || (itemcode>=97 && itemcode<=122 ) || item[k]=='_'){
                    count++;
                }else{
                    break;
                }
            }            
            if(count==item.size()){
                if(businessLine[i]=="electronics") el.push_back(code[i]);
                else if(businessLine[i]=="grocery") gr.push_back(code[i]);
                else if(businessLine[i]=="pharmacy") ph.push_back(code[i]);
                else if(businessLine[i]=="restaurant") res.push_back(code[i]);
            }
        }
    }
    sort(el.begin(),el.end());    
    sort(gr.begin(),gr.end());    
    sort(ph.begin(),ph.end());    
    sort(res.begin(),res.end());    
    for(int i=0;i<el.size();i++){
        solutions.push_back(el[i]);
    }
    for(int i=0;i<gr.size();i++){
        solutions.push_back(gr[i]);
    }
    for(int i=0;i<ph.size();i++){
        solutions.push_back(ph[i]);
    }
    for(int i=0;i<res.size();i++){
        solutions.push_back(res[i]);
    }
    return solutions;
}


};