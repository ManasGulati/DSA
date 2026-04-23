class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> min;

        for(auto i:timePoints){
            min.push_back(stoi(i.substr(0,2))*60+stoi(i.substr(3,2)));
        }
        sort(min.begin(),min.end());
        int ans=INT_MAX;
        for(int i=0;i<min.size()-1;i++){

            if(min[i+1]-min[i]<ans){
                ans=min[i+1]-min[i];
            }
        }
        
        if(min[min.size()-1]-min[0]>720 &&1440%(min[min.size()-1]-min[0])<ans){
            ans=1440%(min[min.size()-1]-min[0]);
        }
        return ans;
        
    }
};