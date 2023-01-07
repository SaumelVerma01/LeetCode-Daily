// Link: https://leetcode.com/problems/delete-columns-to-make-sorted/description/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0;
        for(int i=0;i<(int)strs[0].size();i++){
            bool ok=true;
            char last;
            for(int j=0;j<(int)strs.size();j++){
                if(j==0)last=strs[j][i];
                else ok&=(strs[j][i]>=last),last=strs[j][i];
            }
            c+=(!ok);
        }
        return c;
    }
};
