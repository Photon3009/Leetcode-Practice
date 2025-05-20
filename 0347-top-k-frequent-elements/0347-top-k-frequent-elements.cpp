class Solution {
public:
   vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    // Min-heap with custom comparator
    auto cmp = [&](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second; // smallest freq on top
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> minHeap(cmp);

    for (auto& [num, count] : freq) {
        minHeap.emplace(num, count);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().first);
        minHeap.pop();
    }
    return result;
}
};