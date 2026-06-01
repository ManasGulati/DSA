class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        stack<int>s;
        //right smallest
        vector<int>r(h.size());
        int count=h.size()-1;
        for(auto i:h){
            if(s.empty()){
                s.push(count);
                r[count]=count;
                count--;
                continue;
            }
            if(h[count]>h[s.top()]){
                r[count]=s.top()-1;
                s.push(count);
                count--;
            }else{
                while(!s.empty()&&h[count]<h[s.top()]){
                    s.pop();
                }
                if(s.empty()){
                    r[count]=h.size()-1;
                }else{
                    r[count]=s.top()-1;
                }
                s.push(count);
                count--;
            }
            
        }
        
        //left smallest
        
        vector<int> l(h.size());
        stack<int>s2;
        

        for (int i = 0; i < h.size(); i++) {

            while (!s2.empty() && h[s2.top()] >= h[i]) {
                s2.pop();
            }

            if (s2.empty())
                l[i] = 0;
            else
                l[i] = s2.top()+1;

            s2.push(i);
        }

        //area
        int ans=0;
        for(int idx=0;idx<h.size();idx++){
            int area=h[idx]*(r[idx]-l[idx]+1);
            
            ans=max(ans,area);
        }


        return ans;
    }
};