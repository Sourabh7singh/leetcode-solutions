class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_el = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            int cost = prices[i] - min_el;
            profit = max(cost,profit);
            min_el = min(min_el,prices[i]);
        }

        return profit;
    }
};