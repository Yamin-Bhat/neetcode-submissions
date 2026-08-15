class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0 , j = i + 1;
        int ans = 0;
        while(j < prices.size()){
            if(prices[j] - prices[i] < 0){
                i = j;
                j++;
                continue;
            }
            else if(prices[j] - prices[i] > 0){
                if(prices[j] - prices[i] >= ans){
                    ans = prices[j] - prices[i];
                    j++;
                    continue;
                }
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};
