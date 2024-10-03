class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> unique_nums(nums.begin(), nums.end());  // Remove duplicates
        
        if (unique_nums.size() < 3) {
            // If there are fewer than 3 distinct elements, return the maximum
            return *unique_nums.rbegin();
        }
        
        // Otherwise, return the third largest element
        auto it = unique_nums.rbegin();  // Start from the largest
        ++it;  // Move to second largest
        ++it;  // Move to third largest
        return *it;
    }
};