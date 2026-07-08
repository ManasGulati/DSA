class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map <int,int> m;
        queue <int> q;
        for(int ch:nums){
            
            if((ch&1)==0){
                q.push(ch);
                if(m.find(ch)==m.end()){
                    m[ch]=1;
                }else{
                    m[ch]++;
                }
                                
            }else{
                continue;
            }
            
        }
        while(!q.empty()){
            int ch=q.front();
            if(m[ch]==1){
                return ch;
            }
            
            q.pop();
        }
        return -1;
        
    }
};