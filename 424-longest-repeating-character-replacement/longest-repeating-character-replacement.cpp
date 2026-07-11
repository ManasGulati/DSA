class Solution {
public:
    int characterReplacement(string s, int k) {
        int st=0,end=0,maxlen=0,maxf=0;
        vector<int>map(26,0);
        while(end<s.length()){
            map[s[end]-'A']++;
            maxf=max(maxf,map[s[end]-'A']);
            if(end-st+1-maxf<=k){
                maxlen=max(maxlen,end-st+1);
                end++;
            }else{
                map[s[st]-'A']--;
                st++;
                end++;
            }
        }
        return maxlen;

        
    }
};