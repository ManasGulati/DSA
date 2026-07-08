class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> ratio;
        int tgas=0;
        int tcost=0;
        for(int i=0;i<gas.size();i++){
            ratio.push_back(gas[i]-cost[i]);
            tgas+=gas[i];
            tcost+=cost[i];
        }
        if(tgas<tcost){
            return -1;
        }
        int potential=-1;
        int currgas=0;
        for(int i=0;i<ratio.size();i++){
            if(ratio[i]<0 && potential==-1){
                continue;
            }
            if(potential==-1){
                potential=i;
            }
            currgas+=gas[i]-cost[i];

            if(currgas<0){
                potential=i+1;
                currgas=0;
                
            }

        }
        return potential;

    }
};