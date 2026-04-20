class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int>ans={-1,-1};
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }
        }
        int start2=0,end2=nums.size()-1;
        while(start2<=end2){
            int mid=start2+(end2-start2)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                start2=mid+1;
            }else if(nums[mid]<target){
                start2=mid+1;
            }else if(nums[mid]>target){
                end2=mid-1;
            }
        }
        return ans;
        
    }
};