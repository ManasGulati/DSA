class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it=max_element(nums.begin(),nums.end());
        int idx;
        for(int i=0;i<nums.size();i++){
            if(*(it)==nums[i]){
                idx=i;
            }else{
                if(2*nums[i]>*(it)){
                    return -1;
                }
            }
        }
        return idx;
        
    }
};