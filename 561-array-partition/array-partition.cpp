class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(auto i=nums.begin();i!=nums.end();i=i+2){
            sum+=*(i);
        }
        return sum;
        //trying to get 0ms in solution by multiple submission so it can be updated on github 
        //bcoz it 
    }
};