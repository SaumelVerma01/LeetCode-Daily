// Link: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> m;
        for(auto c:tasks)
            m[c]++;
        int ans=0;
        for(auto f:m){
            if(f.second==1)
                return -1;
            if(f.second%3==0)
                ans+=f.second/3;
            else if(f.second%3==2)
                ans+=(f.second/3+1);
            else if(f.second%3==1)
                ans+=((f.second-4)/3)+2;
        }
        return ans;
    }
};
