class Solution {
public:
    string convert(string s, int n) {
        if(n==1){
            return s;
        }
        vector<string> ans(n);
        bool down=false;
        int row=0;
        for(auto ch:s){
            if(row==0||row==n-1){
                down=!down;
            }
            ans[row].push_back(ch);
            if(down){
                row++;
            }else{
                row--;
            }
        }
        string final;
        for(auto str:ans){
            final+=str;
        }
        return final;

        
    }
};