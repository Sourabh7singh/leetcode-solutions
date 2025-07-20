class Solution {
public:

string addStrings(string num1, string num2) {   
    int p1 = num1.size() - 1;
    int p2 = num2.size() - 1;
    deque<char> qu;
    int carry = 0;
    string result;
    
    while(p1>=0 && p2>=0){
        
        int n1 = num1[p1] - '0';
        int n2 = num2[p2] - '0';
        int total = n1+n2+carry;
        carry = total/10;
        if(total>9){
            total = total%10;
        }
        qu.push_front(total + '0');        
        cout<<"N1: "<<n1<<" N2: "<<n2<<" carry: "<<carry<<" total: "<<total<<endl; 
        p1--;
        p2--;
    }
    
    while(p1>=0){
        int n1 = num1[p1] - '0';
        int total = n1+carry;
        carry = total/10;
        if(total>9){
            total = total%10;
        }
        cout<<"N1: "<<n1<<" carry: "<<carry<<" total: "<<total<<endl; 
        
        qu.push_front(total + '0');        
        p1--;
    }
    
    while(p2>=0){
        int n2 = num2[p2] - '0';
        int total = n2+carry;
        carry = total/10;
        if(total>9){
            total = total%10;
        }
        qu.push_front(total + '0');        
        p2--;
    }
    
    if(carry){
        qu.push_front(carry + '0');        
    }

    while(!qu.empty()){
        result.push_back(qu.front());
        qu.pop_front();

    }
    return result;
}


};