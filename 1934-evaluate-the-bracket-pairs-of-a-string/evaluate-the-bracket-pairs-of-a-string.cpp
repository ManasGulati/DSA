class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        unordered_map<string,string>m;
        string key;
        string ans;
        bool flag=false;

        for(int i=0;i<k.size();i++){
            m[k[i][0]]=k[i][1];
        }

        for(char ch:s){

            if(ch=='('){

                flag=true;
                continue;

            }else if(ch==')'){

                flag=false;
                if(m.find(key)==m.end()){
                    ans.push_back('?');

                }else{

                    ans.append(m[key]);

                }
                key.clear();                
                continue;

            }

            (!flag)?ans.push_back(ch):key.push_back(ch);
        }

        return ans;
        
    }
};