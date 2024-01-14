class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        vector<int>v1(26),v2=v1;
        for(auto it:word1)
            v1[it-'a']++;
        for(auto it:word2)
            v2[it-'a']++;
        for(int i=0;i<26;i++)
        {
            if(v1[i]!=v2[i])
            {
                if(!v1[i] || !v2[i])
                    return false;
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<26;i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
};