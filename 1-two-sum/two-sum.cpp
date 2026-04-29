class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map <int,int> m;
        int idx=0;
        for(auto val:nums){
            if(m.find(t-val)!=m.end()){
                vector<int> ans={idx,m[t-val]};
                return ans;
            }
            m[val]=idx;
            idx++;
        }
    vector<int> ans={-1,-1};
        return ans;
    }
};