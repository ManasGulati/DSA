class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;
        int sp=INT_MIN;
        for(int i:prices){
            cp=min(cp,i);
            sp=max(sp,i-cp);
        }
        return sp;
        
        
    }
};