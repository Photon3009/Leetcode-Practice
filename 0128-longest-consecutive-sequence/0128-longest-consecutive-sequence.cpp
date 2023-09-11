class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int count=1;
        int result=0;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                count++;
                result=max(count,result);
            }
            else if(nums[i]==nums[i-1]){
                result=max(count,result);
            }
            else{
                result=max(count,result);
                count=1;
            }
        
        }
        return result;
    }
};