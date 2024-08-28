#include <stack>

using namespace std; 

class MinStack {
    private: 
        stack<int> s; 
        stack<int> minimums; 

    public:
        MinStack() { }
        
        void push(int val) {
            s.push(val); 

            if (minimums.size() == 0) {
                minimums.push(val);
            } else {
                minimums.push(min(val, minimums.top()));
            }

        }
        
        void pop() {
            s.pop();
            minimums.pop();
        }

        int top() {
            return s.top(); 
        }

        int getMin() {
            return minimums.top(); 
        }
    
};
