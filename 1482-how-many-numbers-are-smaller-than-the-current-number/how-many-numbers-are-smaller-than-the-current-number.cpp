class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>dup(nums);
        sort(dup.begin(),dup.end());
        unordered_map<int,int>m;

        for(int i=0;i<dup.size();i++){
            if(m.find(dup[i])==m.end()){
                m[dup[i]]=i;
            }
        }

        for(int i=0;i<nums.size();i++){
            dup[i]=m[nums[i]];            
        }
        
        return dup;
        
        
    }
};