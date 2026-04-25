class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>map(26,0);
        for(auto ch:s){
            map[ch-'a']++;
        }
        string ans;
        int j=0;

        while(j<order.size()){
            if(map[order[j]-'a']!=0){
                ans.push_back(order[j]);
                map[order[j]-'a']--;
                continue;
            }
            j++;
        }

        j=0;
        while(j<map.size()){
            if(map[j]!=0){
                ans.push_back('a'+j);
                map[j]--;
                continue;
            }
            j++;
        }

        return ans;

    }
};