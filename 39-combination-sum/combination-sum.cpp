class Solution {
public:

    void solve(vector<int> arr, int t, vector<int> &ans, vector<vector<int>> &fin,int i){

        //base case
        if(t==0){
            fin.push_back(ans);
            return;
        }
        if(t<0||i>=arr.size()){
            return;
        }
        

        //recursion call
        
        //include
        if(arr[i]<=t){
            ans.push_back(arr[i]);
            solve(arr,t-arr[i],ans,fin,i);
            
            ans.pop_back();
        }

        //exclude
        solve(arr,t,ans,fin,i+1);
        
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<int> ans;
        vector<vector<int>> fin;

        solve(arr,t,ans,fin,0);
        return fin;
        
    }
};