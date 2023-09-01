class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        int result=-1;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            mx=max(mx,it.second);
        }
        if(mx>n/2){
            for(auto it:mp){
                if(mx==it.second){
                    result=it.first;
                }
            }
        }
        return result;
    }
};