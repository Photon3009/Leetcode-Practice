class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
 unordered_map<int, int> nextGreaterMap; // Maps element to its next greater element
    stack<int> st;
    
    // Iterate through nums2 to find the next greater elements
    for (int num : nums2) {
        // While stack is not empty and current num is greater than the top of the stack
        while (!st.empty() && num > st.top()) {
            nextGreaterMap[st.top()] = num; // Map the next greater element
            st.pop(); // Remove the element from the stack
        }
        st.push(num); // Push the current number onto the stack
    }
    
    // Prepare the result for nums1 based on the nextGreaterMap
    vector<int> result(nums1.size(), -1);
    for (int i = 0; i < nums1.size(); ++i) {
        if (nextGreaterMap.find(nums1[i]) != nextGreaterMap.end()) {
            result[i] = nextGreaterMap[nums1[i]];
        }
    }
    
    return result;
    }
};