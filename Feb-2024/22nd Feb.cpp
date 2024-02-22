class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int> m1, m2;
        for (auto it : trust) {
            m1[it[0]]++;
            m2[it[1]]++;
        }
        vector<int>v;
        for (auto &it : m2) {
            if (m1[it.first])
                v.push_back(it.first);
        }
        for(auto it:v)
            m2.erase(it);
        for(auto it:m2)
        {
            if(it.second==n-1)
                return it.first;
        }
        if(n==1 && m2.empty())
            return 1;
        return -1;
    }
};