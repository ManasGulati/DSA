class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>map;
        for(string str:strs){
            string strr=str;
            sort(strr.begin(),strr.end());
            if(map.find(strr)!=map.end()){
                map[strr].push_back(str);
            }else{
                vector<string> res={str};
                map[strr]=res;
            }
        }
        for(auto it=map.begin();it!=map.end();it++){
            ans.push_back(it->second);
        }
        return ans;
        
    }
};