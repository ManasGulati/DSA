class Solution {
public:
    bool isValid(string word) {
        int vowel=0;
        int con=0;
        
        if(word.length()<3){
            return false;
        }
        for(auto ch:word){
            if(!isalnum(ch)){
                return false;
            }
            if(tolower(ch)=='a'||tolower(ch)=='e'||tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u'){
                vowel++;
            }else if(ch>='0'&&ch<='9'){
                continue;
            }else{
                con++;
            }
        }
        if(vowel>0&&con>0){
            return true;
        }else{
            return false;
        }
        
    }
};