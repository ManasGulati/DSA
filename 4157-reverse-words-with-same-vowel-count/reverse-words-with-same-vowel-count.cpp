class Solution {
public:
    void rev(string &s,int p,int q){

        while(p<q){
            swap(s[p],s[q]);
            p++;
            q--;
        }
    }

    string reverseWords(string s) {

        int vc=0;
        int idx=-1;
        if(s.find(' ')==string::npos){
            return s;
        }else{
            idx=s.find(' ');
        }
        for(int i=0;i<idx;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vc++;
            }
        }
        for(int i=idx+1;i<s.length();i++){

            int temp=0;
            int si=i;
            while(i<s.length()&&s[i]!=' '){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    temp++;
                }
                i++;
            }

            if(temp==vc){
                rev(s,si,i-1);
            }
        }
        return s;
    }
};