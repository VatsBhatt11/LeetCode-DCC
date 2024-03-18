class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0, n = nums.size();
        unordered_map<int, int> m;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++) {
            nums[i] ? c1++ : c0++;
            if (c1 == c0)
                ans = max(ans, i + 1);
            if (m.count(c1 - c0) == 0)
                m[c1 - c0] = i;
            else
                ans = max(ans, i - m[c1 - c0]);
        }
        return ans;
    }
};