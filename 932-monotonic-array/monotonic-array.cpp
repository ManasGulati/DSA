class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc;
        (nums[0]<nums[nums.size()-1])?inc=true:inc=false;
            
        for(int i=0;i<nums.size()-1;i++){
            if(inc){
                if(nums[i+1]<nums[i]){
                    return false;
                }
            }else{
                if(nums[i+1]>nums[i]){
                    return false;
                }
            }
        }
        return true;
    }
};