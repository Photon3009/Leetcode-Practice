class Solution {
public:
    int evalRPN(vector<string>& tokens) {
           stack<int> stack;

        for (const string& token : tokens) {
            if (isOperator(token)) {
                int b = stack.top(); stack.pop();
                int a = stack.top(); stack.pop();
                stack.push(applyOperator(token, a, b));
            } else {
                stack.push(stoi(token));
            }
        }

        return stack.top();
    }

private:
    bool isOperator(const string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }

    int applyOperator(const string& op, int a, int b) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        if (op == "/") return a / b;
        throw std::invalid_argument("Invalid operator");
    
    }
};