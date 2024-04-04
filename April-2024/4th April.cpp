class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, cnt = 0;
        for (auto it : s) {
            if (it == '(')
                cnt++;
            else if (it == ')')
                cnt--;
            ans = max(ans, cnt);
        }
        return ans;
    }
};