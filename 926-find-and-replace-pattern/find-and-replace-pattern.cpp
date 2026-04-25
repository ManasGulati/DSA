class Solution {
public:

    void map(string &str){
        int start='a';
        vector<char>maps(26,0);
        for(auto ch:str){
            if(maps[ch-'a']==0){
                maps[ch-'a']=start;
                start++;
            }
        }
        for(auto &ch:str){
            ch=maps[ch-'a'];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        map(pattern);
        for(auto s:words){
            string temp=s;
            map(temp);
            if(temp==pattern){
                ans.push_back(s);

            }
        }
        return ans;
    }
};