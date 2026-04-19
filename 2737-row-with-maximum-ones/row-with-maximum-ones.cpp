class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int idx=0;
        int max=0;
        for(int i=0;i<mat.size();i++){
            int one=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    one++;
                }
            }
            if (one>max){
                max=one;
                idx=i;
            }
        }
        
        vector <int>ans={idx,max};
        return ans;
    }
};