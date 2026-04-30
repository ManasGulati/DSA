class Solution {
public:
    int bs(vector<int>& nums,int start,int end,int t){
        //base case
        if(start>end){
            return -1;
        }

        //processing
        int mid=start+(end-start)/2;

        //recursive call
        if(nums[mid]==t){
            return mid;
        }else if(nums[mid]>t){
            return bs(nums,start,mid-1,t);
        }else{
            return bs(nums,mid+1,end,t);
        }
        

    }
    int search(vector<int>& nums, int target) {
        int ans=bs(nums,0,nums.size()-1,target);
        return ans;

    }
};