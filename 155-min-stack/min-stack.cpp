class MinStack {
    int min=INT_MAX;
    stack<pair<int,int>>st;
public:
    MinStack() {
        stack<pair<int,int>>start;
        st=start;
    }
    
    void push(int val) {
        pair<int,int>p;
        if(val<min){
            min=val;
        }
        p.first=val;
        p.second=min;
        st.push(p);

        
    }
    
    void pop() {
        
        st.pop();
        if(st.empty()){
            min=INT_MAX;
        }else{
            min=st.top().second;
        }
        
    }
    
    int top() {
        auto p=st.top();
        return p.first;
        
    }
    
    int getMin() {
        auto p=st.top();
        return p.second;
        
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