class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
          sum+=nums[i];
          max=std::max(sum,max);
          if(sum<0){
              sum=0;
          }
        }
        return max;
    }
};