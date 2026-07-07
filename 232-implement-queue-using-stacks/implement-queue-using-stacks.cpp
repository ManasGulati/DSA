class MyQueue {
public:
    stack<int> ans;
    stack<int> arb;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!ans.empty()){
            int ele=ans.top();
            ans.pop();
            arb.push(ele);
        }
        ans.push(x);
        while(!arb.empty()){
            int ele=arb.top();
            arb.pop();
            ans.push(ele);
        }
        
    }
    
    int pop() {
        int ele=ans.top();
        ans.pop();
        return ele;
        
    }
    
    int peek() {
        return ans.top();
        
    }
    
    bool empty() {
        return ans.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */