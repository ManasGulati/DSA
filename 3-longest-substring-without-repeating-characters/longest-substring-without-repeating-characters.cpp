class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=i;
        int ans=INT_MIN;
        unordered_map<char,int>m;
        while(j<s.length()){
            if(m.find(s[j])==m.end()){
                m[s[j]]=j;
                j++;
            }else{
                ans=max(ans,(j-i));
                i=m[s[j]]+1;
                m.clear();
                j=i;
                continue;
            }
        }

        ans=max(ans,(j-i));

        return ans;
        
    }
};