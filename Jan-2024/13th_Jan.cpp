class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m1,m2;
        for(auto it:s)
            m1[it]++;
        for(auto it:t)
            m2[it]++;
        int ans=0;
        for(auto &it:m1)
        {
            if(it.second>m2[it.first])
                ans+=it.second-m2[it.first];
        }
        return ans;
    }
};