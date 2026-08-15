class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0 , j = i + 1;
        int profit = 0;

        while(j < n){
            if(prices[j] < prices[i]){
                
                i = j;
                j++;
                continue;
            }
            profit = max(profit , prices[j] - prices[i]);
            j++;
        }

        return profit;
    }
};


