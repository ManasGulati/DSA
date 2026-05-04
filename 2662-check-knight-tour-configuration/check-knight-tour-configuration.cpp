class Solution {
public:

    bool solve(vector<vector<int>>& grid,int r,int c,int t){
        //base case
        if(r<0||c<0||r>=grid.size()||c>=grid.size()){
            return false;
        }
        if(grid[r][c] != t) return false;

        if(t==(grid.size()*grid.size()-1)){
            return true;
        }

        //recursion call
        //possible ways:-
        bool w1,w2,w3,w4,w5,w6,w7,w8;
        if(grid[r][c]==t){

            w1=solve(grid,r-2,c+1,t+1);
            w2=solve(grid,r-2,c-1,t+1);
            w3=solve(grid,r+2,c+1,t+1);
            w4=solve(grid,r+2,c-1,t+1);
            w5=solve(grid,r-1,c+2,t+1);
            w6=solve(grid,r+1,c+2,t+1);
            w7=solve(grid,r+1,c-2,t+1);
            w8=solve(grid,r-1,c-2,t+1);

        }else{
            return false;
        }
        return (w1|w2|w3|w4|w5|w6|w7|w8);
        
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int r=0,c=0,t=0;
        return solve(grid,0,0,0);
        
        
    }
};