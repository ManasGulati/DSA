class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        int index=INT_MAX;
        string tally=strs[0];
        for(auto str:strs){
            int in=-1;
            for(int j=0;j<str.length();j++){
                if(str[j]==tally[j]){
                    in++;
                }else{
                    break;
                }
            }
            if(in<index){
                index=in;
            }
        }
        if(index==INT_MAX){
            return "";
        }else{
            return tally.substr(0,index+1);
        }

        
    }
};