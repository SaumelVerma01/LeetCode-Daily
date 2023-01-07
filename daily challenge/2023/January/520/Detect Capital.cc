// Link : https://leetcode.com/problems/detect-capital/description/

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ok=(word[0]>='A' && word[0]<='Z');
        int n=word.length();
        if(ok){
            int c=0;
            for(int i=1;i<n;i++)c+=(word[i]>='A' && word[i]<='Z');
            return (c==0 || c==(n-1));
        }
        int c=0;
        for(int i=1;i<n;i++)c+=(word[i]>='A' && word[i]<='Z');
        return (c==0);
    }
};
