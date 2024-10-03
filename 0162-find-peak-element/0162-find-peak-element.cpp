class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int n=nums.size();
        // int s=1;
        // int e=n-2;
        // int mid;
        // if(n==1){
        //     return 0;
        // }
        // if(nums[0]>nums[1]){
        //     return 0;
        // }
        // if(nums[n-1]>nums[n-2]){
        //     return n-1;
        // }
        // while(s<=e){
        //     mid=(s+e)/2;
            
        //     if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
        //         return mid;
        //     }
        //     if(nums[mid]>nums[mid-1]){
        //         s=mid+1;
        //     }
        //     else{
        //         e=mid-1;
        //     }
        // }
        // return mid;
        int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2; // To avoid potential overflow
        
        // Compare mid element with its right neighbor
        if (nums[mid] > nums[mid + 1]) {
            // There is a peak on the left side (including mid)
            right = mid; // Search in the left half
        } else {
            // There is a peak on the right side
            left = mid + 1; // Search in the right half
        }
    }
    
    // left will point to a peak element
    return left;
    }
};