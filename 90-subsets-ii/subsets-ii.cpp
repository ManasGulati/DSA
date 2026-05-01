class Solution {
public:
    void solve(vector<int>v,int idx,vector<int>& ans,vector<vector<int>>& final){
        if(idx>=v.size()){
            final.push_back(ans);
            return;
        }
        ans.push_back(v[idx]);

        solve(v,idx+1,ans,final);
        
        ans.pop_back();
        while(idx<v.size()-1&&v[idx]==v[idx+1]){
            idx++;
        }
        solve(v,idx+1,ans,final);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> final;
        solve(nums,0,ans,final);
        return final;
        
    }
};