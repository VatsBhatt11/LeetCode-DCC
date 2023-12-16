class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int n=s.size();
        unordered_map<int,int>m1,m2;
        for(int i=0;i<n;i++)
        {
            m1[s[i]-'a']++;
            m2[t[i]-'a']++;
        }
        for(auto it:s)
        {
            if(m1[it-'a']!=m2[it-'a'])
                return false;
        }
        return true;
    }
};