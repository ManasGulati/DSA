class Solution {
public:
    static bool mycomp(string &s1, string &s2){
        return (s1+s2)>(s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        vector<string>str;
        for(int i:nums){
            str.push_back(to_string(i));
        }
        sort(str.begin(),str.end(),mycomp);
        string ans;
        for(auto i:str){
            ans+=i;
        }
        if(ans[0]=='0'){
            return "0";
        }
        return ans;
        
    }
};