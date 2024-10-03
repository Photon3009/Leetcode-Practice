class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> set1(nums1.begin(), nums1.end()); // Store unique elements of nums1
    unordered_set<int> intersection; // To store the intersection

    // Iterate through nums2 and check for intersections
    for (int num : nums2) {
        if (set1.erase(num)) { // If num is found in set1, remove it from set1 and add to intersection
            intersection.insert(num);
        }
    }

    // Convert set to vector for the result
    return vector<int>(intersection.begin(), intersection.end());
    }
};