class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rstart=0;
        int rend=matrix.size()-1;
        int n=matrix[0].size()-1;
        int mid=0;
        while(rstart<rend){
            mid=rstart+(rend-rstart)/2;
            if(matrix[mid][n]==target){
                return true;
            }else if(target<matrix[mid][n]){
                rend=mid;
            }else{
                rstart=mid+1;
            }
        }
        mid=rstart+(rend-rstart)/2;
        int cstart=0;
        int cend=n;
        while(cstart<=cend){
            int mid2=cstart+(cend-cstart)/2;
            if(matrix[mid][mid2]==target){
                return true;
            }else if(target<matrix[mid][mid2]){
                cend=mid2-1;
            }else{
                cstart=mid2+1;
            }
        }
        return false;
    }
};