class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0, mx1 = -1, mx2 = -1;
        unordered_map<char, int> m;
        for (auto it : s)
            m[it]++;
        bool flag = false;
        for (auto it : m) {
            if ((it.second - 1) & 1)
                ans += it.second;
            else {
                flag = true;
                ans += it.second - 1;
            }
        }
        if (flag)
            ans++;
        return ans;
    }
};