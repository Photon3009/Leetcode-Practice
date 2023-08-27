class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        int result;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second==1){
                result=i.first;
            }
        }
        return result;
        
    }
};