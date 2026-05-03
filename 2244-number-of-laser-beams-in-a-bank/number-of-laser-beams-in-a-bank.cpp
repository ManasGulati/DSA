class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int ans=0;

        int mul1=-1;
        int mul2=-1;
        
        bool er=true;

        for(auto str:bank){

            int count=0;
            er=true;
            for(auto ch:str){
                if(ch=='1'){
                    count++;
                    er=false;
                }
            }
            
            if(er==false){
                if(mul1==-1){
                    mul1=count;
                }else if(mul2==-1){
                    mul2=count;
                    ans+=(mul1*mul2);
                    mul1=mul2;
                    mul2=-1;
                }
            }
        }
        return ans;

        
    }
};