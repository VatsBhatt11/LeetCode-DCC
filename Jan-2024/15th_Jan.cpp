class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>l,w;
        for(auto it:matches)
        {
            l[it[1]]++;
            w[it[0]]++;
        }
        vector<int>z,o;
        for(auto &it:w)
        {
            if(l[it.first]==0)
                z.push_back(it.first);
        }
        for(auto &it:l)
        {
            if(it.second==1)
                o.push_back(it.first);
        }
        sort(z.begin(),z.end());
        sort(o.begin(),o.end());
        vector<vector<int>>ans;
        ans.push_back(z);
        ans.push_back(o);
        return ans;
    }
};