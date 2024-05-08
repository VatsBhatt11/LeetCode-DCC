class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        vector<int> temp = score;
        sort(temp.rbegin(), temp.rend());
        unordered_map<int, string> m;
        int n = score.size();
        m[temp[0]] = "Gold Medal";
        if (n > 1)
            m[temp[1]] = "Silver Medal";
        if (n > 2)
            m[temp[2]] = "Bronze Medal";
        for (int i = 3; i < n; i++)
            m[temp[i]] = to_string(i + 1);
        for (auto it : score)
            ans.push_back(m[it]);
        return ans;
    }
};