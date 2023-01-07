// Link: https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank=0,total=0,start=0;
        for(int i=0;i<(int)gas.size();i++){
            tank=tank+gas[i]-cost[i];
            if(tank<0){
                start=i+1;
                total+=tank;
                tank=0;
            }
        }
        return (total+tank>=0)?start:-1;
    }
};
