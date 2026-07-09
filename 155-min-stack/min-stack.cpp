class MinStack {
public:
    stack<int> st;
    stack<int> minist;

    MinStack() {
    }
    
    void push(int value) {
        st.push(value);
        if(minist.empty() || minist.top() >= value ){
            minist.push(value);
        }
    }
    
    void pop() {
        if(st.top() == minist.top()){
            minist.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minist.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */