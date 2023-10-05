class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int beg=0;
        int end=n-1;
        int lob=-1;
        int upb=-1;
        vector<int> res;
        int mid=(beg+end)/2;
        while(beg<=end){
             mid=(beg+end)/2;
            if(nums[mid]==target){
                lob=mid;
                end=mid-1;        
            }
            else if(nums[mid]<target){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        beg=0;
        end=n-1;
        mid=(beg+end)/2;
          while(beg<=end){
              mid=(beg+end)/2;
            if(nums[mid]==target){
                upb=mid;
                beg=mid+1;        
            }
            else if(nums[mid]<target){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        res.push_back(lob);
        res.push_back(upb);

    return res;
    }
};