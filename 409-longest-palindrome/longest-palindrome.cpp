class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>m;
        for(char ch:s){
            if(m.find(ch)==m.end()){
                m[ch]=1;
            }else{
                m[ch]++;
            }
        }
        int ans=0;
        bool addone=false;
        for(auto it:m){
            if(it.second%2==0){
                ans+=it.second;
            }else if(it.second%2!=0){
                ans+=(it.second/2)*2;
                addone=true;
            }
        }
        if(addone){
            return ans+1;
        }else{
            return ans;
        }
        
        
    }
};