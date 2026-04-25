class Solution {
public:
    vector<int> map(string s){
        vector<int> ans(26,0);
        for(auto ch:s){
            ans[ch-'a']++;
        }
        return ans;
    }
    bool isAnagram(string s, string t) {
         vector<int>a1=map(s);
         vector <int>a2=map(t);
         if(a1==a2){
            return true;
         }else{
            return false;
         }
    }
};