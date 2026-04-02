class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expect(heights);
        sort(expect.begin(),expect.end());
        int i=0,count=0;
        while (i<heights.size()){
            if(heights[i]!=expect[i]){
                count++;
            }
            i++;
        }
        return count;
    }
};