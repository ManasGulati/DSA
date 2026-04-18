class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0;
        int w=0;
        int b=nums.size()-1;
        while(w<=b){
            if(nums[w]==2){
                swap(nums[w],nums[b]);
                b--;
                continue;
            }
            if(nums[w]==1){
                w++;
                continue;
            }
            if(nums[w]==0){
                swap(nums[w],nums[r]);
                r++;
                w++;
                continue;
            }
            
            
        }
    }
};