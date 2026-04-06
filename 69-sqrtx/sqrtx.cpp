class Solution {
public:
    int mySqrt(int x) {
        int possibility=0,start=0,end=x;
        while(start<=end){
            long mid=start+(end-start)/2;
            if((mid*mid)<=x){
                possibility=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        return possibility;
    }
};