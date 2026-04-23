class Solution {
public:
    int countint(string s,int i,int j){
        int co=0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            co++;
            i--;
            j++;
        }
        return co;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            int a=countint(s,i,i);
            int b=countint(s,i,i+1);
            count=count+a+b;

        }
        return count;
    }
};