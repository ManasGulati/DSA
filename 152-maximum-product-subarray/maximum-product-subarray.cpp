class Solution {
public:
    int maxProduct(vector<int>& n) {
        
        int pre=1,suff=1;
        int maxi=INT_MIN;
        for(int i=0;i<n.size();i++){
            pre*=n[i];
            suff*=n[n.size()-i-1];
            if(pre>maxi){
                maxi=pre;
            }
            if(suff>maxi){
                maxi=suff;
            }
            if(pre==0){
                pre=1;
            }
            if(suff==0){
                suff=1;
            }
        }
        return maxi;
        
    }
};