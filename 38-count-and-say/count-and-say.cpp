class Solution {
public:

    void solve(string &s,int n){
        //base case
        if(n==1){
            return;
        }
        //recursion
        solve(s,n-1);
        char element=s[0];
        string b;
        int count=0;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]==element){
                count++;
            }else{
                b+=to_string(count);
                b+=element;
                element=s[i];
                count=1;
            }
        }

        b+=to_string(count);
        b+=element;
        s=b;

    }
    
    string countAndSay(int n) {

        string s="1";
        solve(s,n);
        return s;

    }

};