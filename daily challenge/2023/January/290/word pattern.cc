// Link : https://leetcode.com/problems/word-pattern/description/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> f;
        set<string> w;
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss>>word)v.push_back(word);
        if(v.size()!=pattern.length())return false;
        for(int i=0;i<(int)pattern.length();i++){
            if(f.find(pattern[i])!=f.end()){
                if(f[pattern[i]]!=v[i])return false;
            }else{
                if(w.find(v[i])!=w.end())return false;
                f[pattern[i]]=v[i];
                w.insert(v[i]);
            }
        }
        return true;
    }
};
