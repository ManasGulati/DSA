class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        vector<int>ps(nums.size());

        int count=0;

        for(int i=0;i<nums.size();i++){

            if(i==0){
                ps[0]=nums[0];
                continue;
            }

            ps[i]=ps[i-1]+nums[i];
        }
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++){

            if(ps[i]==k){

                count++;
            }
            if(m.find(ps[i]-k)!=m.end()){

                count+=(*m.find(ps[i]-k)).second;
            }
            if(m.find(ps[i])==m.end()){

                m[ps[i]]=0;
            }
            
            m[ps[i]]++;
        }
        return count;
        
        
    }
};