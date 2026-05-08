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
        int count=1;
        int del=s.length();
        
        for(int i=1;i<del;i++){
            
            if(s[i]==element){
                count++;
            }else{
                s+=to_string(count);
                s+=element;
                element=s[i];
                count=1;
            }
        }

        s+=to_string(count);
        s+=element;
        s.erase(0,del);

    }
    
    string countAndSay(int n) {

        string s="1";
        solve(s,n);
        return s;

    }

};