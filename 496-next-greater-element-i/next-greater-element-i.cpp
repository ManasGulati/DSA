class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1);
        unordered_map<int,int>m;
        stack<int>s;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]=i;
        }
        for(int i=nums2.size()-1;i>=0;i--){
            s.push(nums2[i]);
            if(m.find(nums2[i])!=m.end()){
                int ge=-1;
                while(!s.empty()){
                    
                    if(s.top()>nums2[i]){
                        
                        ge=s.top();
                        break;
                    }else{
                        
                        s.pop();
                        
                    }
                    

                }
                s.push(nums2[i]);
                ans[m[nums2[i]]]=ge;
            }else{
                continue;
            }

        }
        return ans;
    }    
};