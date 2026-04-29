class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1]){
                    continue;
                }
                int p=j+1,k=nums.size()-1;
                while(p<k){
                    long long sum=(long long) nums[p]+(long long)nums[i]+(long long)nums[j]+(long long)nums[k];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[p],nums[k]});
                        p++;
                        k--;
                        while(p<k&&nums[p]==nums[p-1])p++; 
                    }else if(sum>target){
                        k--;
                    }else{
                        p++;
                    }
                }
            }
        }
        return ans;
        
    }
};