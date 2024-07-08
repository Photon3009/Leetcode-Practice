class MinStack {
private:
    std::stack<int> mainStack; // Main stack to hold all values
    std::stack<int> minStack;  

public:
    MinStack() {
        // No initialization needed, stack objects are default initialized.
    }
    
    void push(int val) {
        mainStack.push(val);
        // If minStack is empty or the current value is less than or equal to the current minimum, push it onto minStack
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
         if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
         return mainStack.top();
    }
    
    int getMin() {
         return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */