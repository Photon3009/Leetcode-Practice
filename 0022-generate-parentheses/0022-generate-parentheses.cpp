class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        generateParenthesisRecursive(n, n, "", result);
        return result;
    }
    
private:
    void generateParenthesisRecursive(int left, int right, std::string current, std::vector<std::string>& result) {
        // Base case: if both left and right are zero, we have formed a valid combination
        if (left == 0 && right == 0) {
            result.push_back(current);
            return;
        }
        
        // Recursively add '(' if there are more left parentheses to use
        if (left > 0) {
            generateParenthesisRecursive(left - 1, right, current + '(', result);
        }
        
        // Recursively add ')' if there are more right parentheses to use than left
        if (right > left) {
            generateParenthesisRecursive(left, right - 1, current + ')', result);
        }
    }
};