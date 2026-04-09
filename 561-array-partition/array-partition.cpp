class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        for(auto it=nums.begin();it!=nums.end();it=it+2){
            s+=*(it);
        }
        return s;
    }
};