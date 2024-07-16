class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            int cost=prices[i]-mini;
            maxProfit=max(cost,maxProfit);
            mini=min(mini,prices[i]);
        }
        return maxProfit;
    }
};