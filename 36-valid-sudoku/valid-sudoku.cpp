class Solution {
public:
    bool block(vector<vector<char>>& b,int r,int c,unordered_set<char>s){
        
        for(int i=r;i<r+3;i++){
            
            for(int j=c;j<c+3;j++){
                if(b[i][j]!='.'){
                    cout<<i<<j<<b[i][j]<<endl;
                    if(s.find(b[i][j])!=s.end()){
                        return false;
                    }else{
                        s.insert(b[i][j]);
                    }
                }

            }


        }
        return true;


    }
    bool isValidSudoku(vector<vector<char>>& b) {
        int n=9;
        for(int row=0;row<n;row++){
            unordered_set<char>s;
            for(int i=0;i<n;i++){
                if(b[row][i]!='.'){

                    if(s.find(b[row][i])!=s.end()){
                        
                        return false;
                    }else{
                        s.insert(b[row][i]);
                    }
                }
            }
        }
        for(int col=0;col<n;col++){
            unordered_set<char>s;
            for(int i=0;i<n;i++){
                if(b[i][col]!='.'){
                    if(s.find(b[i][col])!=s.end()){
                        return false;
                    }else{
                        s.insert(b[i][col]);
                    }
                }
            }
        }
        for(int i=0;i<9;i+=3){
            unordered_set<char>s;
            
            for(int j=0;j<9;j+=3){
                if(!block(b,i,j,s)){
                    return false;
                }
            }
        }
        return true;

    }
};