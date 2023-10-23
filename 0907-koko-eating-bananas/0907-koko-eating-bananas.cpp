class Solution {
public:
    int time_func(long long mid,vector<int> &piles){
        int time=0;
        for(int i=0;i<piles.size();i++){
            time+=(piles[i]/mid)+((piles[i]%mid)!=0);
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int ans=0;
        long long mid;
        
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            mid=(low+high+1ll)/2;
            int time=time_func(mid,piles);
            if(time<=h){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
};