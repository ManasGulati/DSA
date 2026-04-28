class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int t=0,r=m[0].size()-1,b=m.size()-1,l=0;        
        while(t<=b&&r>=l){
            for(int i=l;i<=r;i++){
                ans.push_back(m[t][i]);
            }
            t++;
            if(!(t<=b&&r>=l)){
                break;
            }
            for(int i=t;i<=b;i++){
                ans.push_back(m[i][r]);
            }
            r--;
            if(!(t<=b&&r>=l)){
                break;
            }
            for(int i=r;i>=l;i--){
                ans.push_back(m[b][i]);
            }
            b--;
            for(int i=b;i>=t;i--){
                ans.push_back(m[i][l]);
            }
            l++;
        }
        return ans;
        
    }
};