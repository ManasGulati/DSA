class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map <char,int> m;
        queue <int> q;
        for(char ch:s){
            if(m.find(ch)==m.end()){
                m[ch]=1;
            }else{
                m[ch]++;
            }
            q.push(ch);
        }
        int count=0;

        while(!q.empty()){
            char ch=q.front();
            q.pop();
            if(m[ch]==1){
                return count;
            }
            count++;
        }
        return -1;
    }
};