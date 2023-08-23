class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int output=0;
        vector<int> num(n+1,0);
        for(int i=0;i<n;i++){
            num[nums[i]]=1;
        }
        for(int i=0;i<n+1;i++){
            if(num[i]!=1){
                output=i;
                break;
            }
        }
        return output;
    }
};