class Solution {
public:
    int maxProfit(vector<int>& prices) {
         if (prices.empty()) return 0;
        
        int buy = 0; // Buy pointer
        int max_profit = 0;

        for (int sell = 1; sell < prices.size(); ++sell) {
            if (prices[sell] < prices[buy]) {
                buy = sell; // Update buy pointer if current price is lower
            } else {
                int profit = prices[sell] - prices[buy];
                max_profit = std::max(max_profit, profit);
            }
        }

        return max_profit;
        // Mine approach below
        // int n=prices.size();
        // int maxProfit=0;
        // int mini=prices[0];
        // for(int i=1;i<n;i++){
        //     int cost=prices[i]-mini;
        //     maxProfit=max(cost,maxProfit);
        //     mini=min(mini,prices[i]);
        // }
        // return maxProfit;
    }
};