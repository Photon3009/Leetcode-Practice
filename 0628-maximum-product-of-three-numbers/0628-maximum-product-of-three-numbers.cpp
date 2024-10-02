class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        // Sort the array
        std::sort(nums.begin(), nums.end());
        
        // Maximum product can be from:
        // 1. The product of the three largest numbers
        int maxProduct1 = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3];
        
        // 2. The product of the two smallest numbers and the largest number
        int maxProduct2 = nums[0] * nums[1] * nums[nums.size() - 1];
        
        // Return the maximum of the two products
        return std::max(maxProduct1, maxProduct2);
    }
};