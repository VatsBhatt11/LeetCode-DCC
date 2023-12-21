class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        int n = points.size();
        vector<int> v;
        for (auto it : points)
            v.push_back(it[0]);
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, v[i + 1] - v[i]);
        return ans;
    }
};