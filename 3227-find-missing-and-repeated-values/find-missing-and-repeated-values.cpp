class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size()*grid.size();

        int esum=(n*(n+1))/2;

        int asum=0;

        unordered_set<int>s;

        vector <int>ans;

        for(auto v:grid){

            for(auto i:v){

                asum+=i;
                if(s.find(i)!=s.end()){

                    ans.push_back(i);
                }

                s.insert(i);
                
            }
        }
        asum-=ans[0];
        ans.push_back(abs(esum-asum));
        return ans;

    }
};