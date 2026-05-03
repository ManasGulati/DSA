class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //0ms:Achieve through multiple commits:trying
        //gibb1132187

        int i=0;
        int j=i;
        int ans=INT_MIN;
        unordered_map<char,int>m;

        while(j<s.length()){

            if(m.find(s[j])==m.end()){
                m[s[j]]=j;
                j++;

            }else{

                if(m[s[j]]<i){
                    m[s[j]]=j;
                    j++;
                    continue;
                }

                ans=max(ans,(j-i));
                i=m[s[j]]+1;
                m[s[j]]=j;
                j++;
            }
        }

        ans=max(ans,(j-i));

        return ans;
        
    }
};