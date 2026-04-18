class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector <int>b=nums;
        sort(b.begin(),b.end());
        for(int i=0;i<b.size()-1;i++){
            if(b[i]==b[i+1]){
                return b[i];
            }
            
        }
        return -1;
        
    }
};