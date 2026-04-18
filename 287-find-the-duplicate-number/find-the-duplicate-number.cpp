class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++; 
        }
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]>1){
                return i;
            }
        }

        return -1;
        
    }
};