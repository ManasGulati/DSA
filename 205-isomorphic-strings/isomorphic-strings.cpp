class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> m;
        unordered_set <char> set;
        for(int i=0;i<s.size();i++){

            if(m.find(s[i])==m.end()&&set.find(t[i])!=set.end()){
                return false;
            }

            if(m.find(s[i])==m.end()){
                m[s[i]]=t[i];
            }
            s[i]=m[s[i]];
            set.insert(t[i]);
            
        }
        return (s==t);

    }
};