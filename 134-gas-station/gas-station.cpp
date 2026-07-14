class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0;
        int tank=0;
        int g_cost=0;
        int station=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            g_cost+=cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0){
                station=i+1;
                tank=0;
            }
        }
            if(total_gas<g_cost){
                return -1;
            }
            return station;
    }
};