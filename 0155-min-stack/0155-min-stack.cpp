class MinStack {
    stack<int> st,mnSt;
public:
    MinStack() {
    }
    void push(int value) {
        st.push(value);
        if(mnSt.empty()){
            mnSt.push(value);
        }
        else{
            mnSt.push(min(value,mnSt.top()));
        }

    }
    void pop() {
        st.pop();
        mnSt.pop();
    }
    
    int top() {
        return st.top();
    }
    int getMin() {
        return mnSt.top();
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