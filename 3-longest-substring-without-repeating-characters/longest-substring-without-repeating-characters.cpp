class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char> s;
        int i=0,j=0;
        int count=0;
        int maxi=0;
        while(j<str.length()){
            if(s.count(str[j])==0){
                s.insert(str[j]);
                count++;
                j++;
            
            }else{
                s.erase(str[i]);
                count--;
                i++;
            }
            
            maxi=max(maxi,count);
        }
        return maxi;
    }
};