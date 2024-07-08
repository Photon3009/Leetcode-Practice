class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
            int n = temperatures.size();
        std::vector<int> result(n, 0);
        std::stack<int> stk; // stack to store indices of the temperatures
        
        for (int i = 0; i < n; ++i) {
            // Process the stack while there is an index with a lower temperature
            while (!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
                int prevIndex = stk.top();
                stk.pop();
                result[prevIndex] = i - prevIndex;
            }
            stk.push(i); // push the current index onto the stack
        }
        
        return result;
    }
};