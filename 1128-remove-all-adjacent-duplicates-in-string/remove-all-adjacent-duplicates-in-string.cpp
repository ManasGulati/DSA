class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        int n=s.length()-1;
        
        while(i<n){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i--;
                if(i<0){
                    i=0;
                }
                continue;
            }
            i++;
        }

        return s;
    }
};