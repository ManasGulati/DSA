class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)==string::npos){
            return word;
        }
        int s=0,e=word.find(ch);
        while(s<e){
            swap(word[s],word[e]);
            s++;
            e--;
        }
        return word;
        
    }
};