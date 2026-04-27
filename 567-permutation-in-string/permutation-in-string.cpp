class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>pattern(26,0);
        for(auto ch:s1){
            pattern[ch-'a']++;
        }
        int ws=s1.length();
        for(int i=0;i<s2.size();i++){
            int wi=i;
            int rl=wi+ws;
            vector <int>wf(26,0);
            while(rl<=s2.size()&&wi<i+ws){
                wf[s2[wi++]-'a']++;
            }
            if(wf==pattern){
                return true;
            }
        }
        return false;
        
        
    }
};