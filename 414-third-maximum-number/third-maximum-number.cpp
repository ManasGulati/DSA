class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int64_t fir=-3147483648,sec=-3147483648,thi=-3147483648;
        for(int64_t i:nums){
            if(i>fir){
                thi=sec;
                sec=fir;
                fir=i;
            }else if(fir>i && i>sec){
                thi=sec;
                sec=i;
            }else if(sec>i && (i>thi)){
                thi=i;
            }
            
        }
        if(thi==-3147483648){
            return fir;
        }else{
            return thi;
        }        
    }
};