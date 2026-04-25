class Solution {
public:
    string decodeMessage(string key, string message) {
        vector <char> map(200,0);
        char start='a';
        for(auto ch:key){
            if(ch!=' '&&map[ch]==0){
                map[ch]=start;
                start++;
            }
        }

        string ans;
        for(auto ch:message){
            if(ch==' '){
                ans.push_back(' ');
            }else{
                ans.push_back(map[ch]);
            }
        }

        return ans;
    }
};