// Link: https://leetcode.com/problems/max-points-on-a-line/description/

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(),ans=1;
        sort(begin(points),end(points));
        for(int i=0;i<n;i++){
            map<pair<int,int>,int> slope;
            for(int j=i+1;j<n;j++){
                int dx=points[j][0]-points[i][0];
                int dy=points[j][1]-points[i][1];
                int g=__gcd(abs(dx),abs(dy));
                slope[{dx/g,dy/g}]++;
            }
            for(auto f:slope){
                ans=max(ans,f.second+1);
            }
        }
        return ans;
    }
};
