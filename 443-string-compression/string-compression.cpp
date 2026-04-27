class Solution {
public:
    int compress(vector<char>& chars) {
        int element=chars[0];
        int start=0;
        int idx=0;
        int j=0;
        while(j<chars.size()){
            if(chars[j]==element){
                j++;
                continue;
            }else{
                chars[start]=element;
                start++;
                if(j-idx>1){
                    
                    string count=to_string(j-idx);
                for(int k=0;k<count.size();k++){
                    chars[start]=count[k];
                    start++;
                }
                    idx=j;
                    element=chars[idx];
                }else{
                    idx=j;
                    element=chars[idx];
                }
            }
        }
        chars[start]=element;
        start++;
        if(j-idx>1){
            string count=to_string(j-idx);
            for(int k=0;k<count.size();k++){
                chars[start]=count[k];
                start++;
            }
            idx=j;
            element=chars[idx];
        }else{
            idx=j;
        }
        
        return start;
    }
};