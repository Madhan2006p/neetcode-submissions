class MinStack {
public:

    stack<int> Stack;
    stack<int> minStack;
    MinStack() {
        // nothing to do
    }
    
    void push(int val) {
        Stack.push(val);
        if (minStack.empty() || val <= minStack.top() ) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (Stack.top() == minStack.top())
            minStack.pop();
        Stack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
