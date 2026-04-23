class Solution {
public:

    bool pa(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int first=-1,last=-1;
        int i=0,j=s.length()-1;

        while(i<j){
            if(s[i]!=s[j]){
                first=i;
                last=j;
                break;
            }
            i++;
            j--;
        }
        if(first==-1){
            return true;
        }

        string s1=s;
        string s2=s;
        s1.erase(first,1);
        bool ans1=pa(s1);
        if(!ans1){

            s2.erase(last,1);
            ans1=pa(s2);
        }
        
        return ans1;
    }

};