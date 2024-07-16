class Solution {
public:
    int lengthOfLongestSubstring(string s) {
  
    unordered_set<char> charSet;
        int max_length = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];
            while (charSet.find(currentChar) != charSet.end()) {
                charSet.erase(s[left]);
                ++left;
            }
            charSet.insert(currentChar);
            max_length = max(max_length, right - left + 1);
        }
        
        return max_length;
    }
};