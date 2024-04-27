class Solution {
public:
    int n, m;
    vector<int> pos[26];

    int helper(int i, int j, vector<vector<int>>& dp, string& key) {
        if (j == m)
            return 0;
        if (dp[i][j] != INT_MAX)
            return dp[i][j];
        int best = INT_MAX;
        for (auto it : pos[key[j] - 'a'])
            best = min(best, min(abs(it - i), n - abs(it - i)) +
                                 helper(it, j + 1, dp, key));
        return dp[i][j] = best + 1;
    }

    int findRotateSteps(string ring, string key) {
        n = ring.size(), m = key.size();
        for (int i = 0; i < n; i++)
            pos[ring[i] - 'a'].push_back(i);
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        return helper(0, 0, dp, key);
    }
};