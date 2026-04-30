class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        
        for(auto str:strs){
            vector<int> freq(26,0);
            string key;
            for(auto ch:str){
                freq[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                key.push_back(freq[i]+'\0');
            }
            if(m.find(key)!=m.end()){
                m[key].push_back(str);
            }else{
                m[key]={str};
            }
        }
        vector<vector<string>> ans;
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;

                
    }
};