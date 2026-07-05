class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        int st,end;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            st=0;
            end=nums.size()-1;
            while(st<end){
                swap(nums[st],nums[end]);
                st++;
                end--;
            }
        }else{
            int swapper;
            for(int i=nums.size()-1;i>=pivot;i--){
                if(nums[i]>nums[pivot-1]){
                    swapper=i;
                    break;
                }
            }
            
            swap(nums[pivot-1],nums[swapper]);
            st=pivot;
            end=nums.size()-1;
            while(st<end){
                swap(nums[st],nums[end]);
                st++;
                end--;
            }
            
            
        }
        
    }
};