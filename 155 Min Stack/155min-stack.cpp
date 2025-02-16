#include <stack>
#include <climits>

class MinStack {
public:
    std::stack<long long> localStack; 
    long long minimum = INT_MAX; 

    MinStack() { }
    
    void push(int val) {
        long long value = val; 
        if (localStack.empty()) {
            localStack.push(value);
            minimum = value;
        } else {
            if (value < minimum) {
                localStack.push(2 * value - minimum);
                minimum = value;
            } else {
                localStack.push(value);
            }
        }
    }
    
    void pop() {
        if (localStack.empty()) {
            return;
        }
        long long current = localStack.top();
        localStack.pop();

        if (current < minimum) { 
            minimum = 2 * minimum - current; 
        }
    }
    
    int top() {
        long long current = localStack.top();
        return (current < minimum) ? minimum : current;
    }
    
    int getMin() {
        return minimum;
    }
};
