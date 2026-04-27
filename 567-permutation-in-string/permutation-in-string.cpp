class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>pattern(26,0);
        for(auto ch:s1){
            pattern[ch-'a']++;
        }
        int i=0,j=0;
        vector<int>wf(26,0);

        while(j<s2.length()){

            wf[s2[j]-'a']++;
            if(j-i+1<s1.length()){
                j++;
                continue;
            }
            if(wf==pattern){
                return true;
            }else{
                wf[s2[i]-'a']--;
                i++;
                j++;
            }

        }
        return false;
        
    }
};