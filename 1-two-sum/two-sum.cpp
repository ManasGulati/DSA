class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        unordered_map <int,int> m;
        int idx=0;
        vector<int> ans;
        for(auto val:nums){
            if(m.find(t-val)!=m.end()){
                ans={idx,m[t-val]};
                break;
            }
            m[val]=idx;
            idx++;
        }

        return ans;
    }
};