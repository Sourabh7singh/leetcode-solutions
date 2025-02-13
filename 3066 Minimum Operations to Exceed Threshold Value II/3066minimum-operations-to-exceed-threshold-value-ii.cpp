typedef long long ll;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size()==0){
            return 0;
        }


        int operations = 0;

        priority_queue<ll, vector<ll>, greater<ll>> pq;
    
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(pq.size() > 1){
            long long int lastElement = pq.top();
            if (lastElement>=k){
                break;
            }else{
                pq.pop();
                long long int secondLastElement = pq.top();
                if(secondLastElement>=k){
                    operations++;
                    break;
                }else{
                    pq.pop();
                    long long int newElement = min(lastElement,secondLastElement)*2 + max(lastElement,secondLastElement);
                    pq.push(newElement);
                    operations++;
                }
                
            }
        }

        return operations;
    }
};