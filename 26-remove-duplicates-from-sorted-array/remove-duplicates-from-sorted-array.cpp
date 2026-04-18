class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int S=nums.size()-1;
        for(int i=nums.size()-1;i>0;i--){
            int P=i;
            int C=P-1;   
            if(nums[P]==nums[C]){
                swap(nums[P],nums[S]);
                S--;
            };      
        }
        sort(nums.begin(),nums.begin()+(S+1));
        return ++S;   
    }
};