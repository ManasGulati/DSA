class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(i>i+1&&nums[j]==nums[j-1]){
                    j++;
                    continue;
                }
                if(k<nums.size()-1&&nums[k]==nums[k+1]){
                    k--;
                    continue;
                }
                if(nums[j]+nums[k]==(-1)*nums[i]){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                }else if(nums[j]+nums[k]>(-1)*nums[i]){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return ans;
    }
};