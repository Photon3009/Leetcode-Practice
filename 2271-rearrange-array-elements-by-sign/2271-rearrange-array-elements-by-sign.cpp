class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> po;
        vector<int> ne;
        vector<int> r;
        int pc=0,nc=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                po.push_back(nums[i]);
            }else{
                ne.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(count==0){
                r.push_back(po[pc]);
                pc++;
                count=1;
            }else{
                r.push_back(ne[nc]);
                nc++;
                count=0;
            }
            
        }
        return r;
    }
};