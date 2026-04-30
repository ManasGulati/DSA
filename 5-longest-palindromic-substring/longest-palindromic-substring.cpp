class Solution {
public:
    int oddcase(int i,string s){
        int j=i,k=i;

        while(j>=0&&k<s.length()){
            if(s[j]!=s[k]){
                break;
            }
            j--;
            k++;
        }
        return j+1;
    }
    int evencase(int i,string s){
        int j=i,k=i+1;
        if(k>s.length()&&s[j]!=s[k]){
            return i+1;
        }

        while(j>=0&&k<s.length()){
            if(s[j]!=s[k]){
                break;
            }
            j--;
            k++;
        }
        return j+1;
    }
    string longestPalindrome(string s) {
        int si=-1;
        int length=-1;
        for(int i=0;i<s.length();i++){
            int a=oddcase(i,s);
            int oddlength=(i-a)*2+1;
            int b=evencase(i,s);
            int evenlength=(i-b+1)*2;
            if(oddlength>length){
                length=oddlength;
                si=a;

            }
            if(evenlength>length){
                length=evenlength;
                si=b;

            }
        }
        return s.substr(si,length);

        
    }
};