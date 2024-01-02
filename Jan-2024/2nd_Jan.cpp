class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        while(!m.empty())
        {
            vector<int>v,toErase;
            for(auto &it:m)
            {
                v.push_back(it.first);
                it.second--;
                if(it.second==0)
                    toErase.push_back(it.first);
            }
            for(auto &it:toErase)
                m.erase(it);
            ans.push_back(v);
        }
        return ans;
    }
};