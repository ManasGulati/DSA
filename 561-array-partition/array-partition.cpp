class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int um=0;
        for(auto i=nums.begin();i!=nums.end();i=i+2){
            um+=*(i);
        }
        return um;
    }
};