class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& n) {
        vector<int>ans(n);
        stack<int>s;
        ans.insert(ans.end(),n.begin(),n.end());
        int idx=n.size()-1;
        int i=ans.size()-1;

        while(i>=0){
            int ge=-1;
            while(!s.empty()){
                if(s.top()>ans[i]){
                    ge=s.top();
                    break;
                }else{
                    s.pop();
                }                  
            }
            s.push(ans[i]);
            if(idx<0){
                idx=n.size()-1;
            }
            n[idx]=ge;
            s.push(ans[i]);
            i--;
            idx--;
        }
        
        return n;
        
    }
};