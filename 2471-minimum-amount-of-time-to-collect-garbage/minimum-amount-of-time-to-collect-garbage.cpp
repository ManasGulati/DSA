class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int>M(garbage.size(),0);
        vector<int>P(garbage.size(),0);
        vector<int>G(garbage.size(),0);
        int i=0;
        for(auto s:garbage){
            for(auto c:s){
                if(c=='M'){
                    M[i]++;
                }else if(c=='P'){
                    P[i]++;
                }else{
                    G[i]++;
                }
            }
            i++;
        }
        int min=0;
        bool foundM=false;
        bool foundP=false;
        bool foundG=false;
        for(int i=garbage.size()-1;i>0;i--){
            if(M[i]!=0&&!foundM){
                foundM=true;
                min+=M[i];
                min+=travel[i-1];
            }else if(M[i]!=0&&foundM){
                min+=M[i];
                min+=travel[i-1];
            }else if(M[i]==0&&foundM){
                min+=travel[i-1];
            }
            if(P[i]!=0&&!foundP){
                foundP=true;
                min+=P[i];
                min+=travel[i-1];
            }else if(P[i]!=0&&foundP){
                min+=P[i];
                min+=travel[i-1];
            }else if(P[i]==0&&foundP){
                min+=travel[i-1];
            }
            if(G[i]!=0&&!foundG){
                foundG=true;
                min+=G[i];
                min+=travel[i-1];
            }else if(G[i]!=0&&foundG){
                min+=G[i];
                min+=travel[i-1];
            }else if(G[i]==0&&foundG){
                min+=travel[i-1];
            }
        }
        min+=M[0]+P[0]+G[0];
        return min;  
    }
};