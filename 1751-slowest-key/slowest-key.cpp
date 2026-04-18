class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max=releaseTimes[0];
        char key=keysPressed[0];
        for(int i=1;i<releaseTimes.size();i++){
            if ((releaseTimes[i]-releaseTimes[i-1])>max){
                max=(releaseTimes[i]-releaseTimes[i-1]);
                key=keysPressed[i];
            }else if((releaseTimes[i]-releaseTimes[i-1])==max){
                if(keysPressed[i]>key){
                    key=keysPressed[i];
                }
                continue;
            }else{
                continue;
            }
        }
        return key;
    }
};