// Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(begin(points),end(points));
        int n=points.size();
        int c=0,l=n-1;
        while(l>=0){
            c++;
            int p=points[l][0];
            while(l>=1 && points[l-1][1]>=p)l--;
            l--;
        }
        return c;
    }
};
