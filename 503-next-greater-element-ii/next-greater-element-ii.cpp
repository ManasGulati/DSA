class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& n) {
        
        stack<int>s;
        vector<int>ans(n);

        
        int idx=n.size()-1;
        int i=(n.size()*2)-1;

        while(i>=0){
            int ge=-1;
            while(!s.empty()){
                if(s.top()>n[i%n.size()]){
                    ge=s.top();
                    break;
                }else{
                    s.pop();
                }                  
            }


            s.push(n[i%n.size()]);
            if(idx<0){
                idx=n.size()-1;
            }
            cout<<idx<<ge<<endl;
            ans[idx]=ge;
            i--;
            idx--;
        }
        
        return ans;
        
    }
};