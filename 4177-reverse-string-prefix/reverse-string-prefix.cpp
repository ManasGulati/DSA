class Solution {
public:
    string reversePrefix(string s, int k) {
        int st=0,e=k-1;
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
        return s;
        
    }
};