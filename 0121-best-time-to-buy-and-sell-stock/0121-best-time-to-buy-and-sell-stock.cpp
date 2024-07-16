class Solution {
public:
    int maxProfit(vector<int>& p) {
        if (p.empty()) return 0;
        
        int n=p.size();
        int l=0,r=1;
        int maxP=0;
        while(r<n){
            if(p[l]<p[r]){
                int pro=p[r]-p[l];
                maxP=max(maxP,pro);
            }
            else{
                l=r;
            }
            r++;
        }

        return maxP;
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