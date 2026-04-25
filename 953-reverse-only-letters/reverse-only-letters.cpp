class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(!(tolower(s[i])>='a'&&tolower(s[i])<='z')){
                i++;
            }else if(!(tolower(s[j])>='a'&&tolower(s[j])<='z')){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};