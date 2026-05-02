class Solution {
public:

    void solve(int n,vector<vector<string>> p,vector<vector<string>> &ans,int qr,int row){
        //base case
        if(qr==0){
            vector<string> v;
            for(auto vec:p){
                string s;
                for(auto str:vec){
                    s.append(str);
                }
                v.push_back(s);
            }
            ans.push_back(v);
            return;
        }
        if(row>=n){
            return;
        }

        //recursion call
        for(int i=0;i<n;i++){
            vector<vector<string>>q=p;

            if(q[row][i]=="1"){
                q[row][i]="Q";
            }else{
                continue;
            }
            int temp=row;
            
            for(int j=0;j<n;j++){
                if(q[row][j]!="Q"){
                    q[row][j]=".";
                } 
            }
            for(int j=0;j<n;j++){
                if(q[j][i]!="Q"){
                    q[j][i]=".";
                } 
            }
            for(int r=row, c=i; r<n && c<n; r++, c++)
                if(q[r][c]!="Q") q[r][c]=".";

            for(int r=row, c=i; r<n && c>=0; r++, c--)
                if(q[r][c]!="Q") q[r][c]=".";

            for(int r=row, c=i; r>=0 && c<n; r--, c++)
                if(q[r][c]!="Q") q[r][c]=".";

            for(int r=row, c=i; r>=0 && c>=0; r--, c--)
                if(q[r][c]!="Q") q[r][c]=".";
            solve(n,q,ans,qr-1,row+1);

        }
        

    };

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> possibility(n, vector<string>(n, "1"));
        vector<vector<string>> ans;
        int row=0;
        solve(n,possibility,ans,n,row);
        return ans;

        
    }
};