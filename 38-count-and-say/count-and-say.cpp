class Solution {
public:

    string solve(string &s,int n){

        //base case
        if(n==1){
            return s;
        }

        //recursion
        string a=solve(s,n-1);
        char element=a[0];
        string b;
        int count=0;
        
        for(int i=0;i<a.length();i++){
            
            if(a[i]==element){
                count++;
            }else{
                b+=to_string(count);
                b+=element;
                element=a[i];
                count=1;
            }
        }
        b+=to_string(count);
        b+=element;
        return b;

    }
    
    string countAndSay(int n) {
        
        string s="1";
        return solve(s,n);


        
    }
};