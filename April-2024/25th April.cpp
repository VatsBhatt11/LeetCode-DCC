class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> dp(26);
        int ans = 0;
        for (auto it : s) {
            int cur = it - 'a';
            int best = 0;
            for (int prev = 0; prev < 26; prev++) {
                if (abs(cur - prev) <= k)
                    best = max(best, dp[prev]);
            }
            dp[cur] = max(dp[cur], best + 1);
            ans = max(ans, dp[cur]);
        }
        return ans;
    }
};