class Solution {

public: vector<int> maxSlidingWindow(const std::vector<int>& nums, int k) {
vector<int> result;
    deque<int> dq; // To store indices of array elements

    for (int i = 0; i < nums.size(); ++i) {
        // Remove indices that are out of the current window
        if (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }

        // Remove elements from the back of the deque while the current element is larger
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        // Add the current element's index to the back of the deque
        dq.push_back(i);

        // The maximum of the window is at the front of the deque
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}
};