class Solution {
public:
    int reverseDegree(string s) {

        //comment:trying to get 0ms by multiple commits

        unordered_map<char,int>m;
        char start='a';

        for(int i=26;i>=1;i--){
            m[start]=i;
            start++;
        }

        int ans=0;
        int idx=1;

        for(auto ch:s){
            ans+=(m[ch]*idx);
            idx++;
        }
        return ans;
    }
};