class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0, n = nums.size();
        unordered_map<int, int> m;
        int l = 0, r = 0;
        while (r < n) {
            m[nums[r]]++;
            while (l < r && m[nums[r]] > k) {
                m[nums[l++]]--;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};