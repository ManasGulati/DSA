class Solution {
public:
    int mySqrt(int x) {
        int possibility=0;
        for(long i=1;i<=x;i++){
            if(long (i*i)<=x){
                possibility=i;
            }else{
                break;
            }           
        }
        return possibility;
    }
};