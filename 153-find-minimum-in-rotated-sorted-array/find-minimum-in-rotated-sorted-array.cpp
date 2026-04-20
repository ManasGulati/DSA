class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]<nums[nums.size()-1]){
            return nums[0];
        }
        
        int start=1,end=nums.size()-1;
        int mid=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]<nums[mid-1]){
                return nums[mid];
            }else if(nums[mid]>nums[0]){
                start=mid+1;
            }else if(nums[mid]<nums[nums.size()-1]){
                end=mid-1;
            }
        }
        return -1;
    }
};