// Link: https://leetcode.com/problems/maximum-ice-cream-bars/description/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs),end(costs));
        int ans=0;
        for(int i=0;i<(int)costs.size() && coins>=costs[i];i++){
            ans++;
            coins-=costs[i];
        }
        return ans;
    }
};
