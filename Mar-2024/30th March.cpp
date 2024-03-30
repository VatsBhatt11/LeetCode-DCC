class Solution {
public:
    int helper(vector<int> nums, int k) {
        int ans = 0;
        unordered_map<int, int> m;
        int l = 0, r = 0, n = nums.size(), cnt;
        while (r < n) {
            m[nums[r++]]++;
            cnt = m.size();
            while (cnt > k) {
                int x = nums[l++];
                m[x]--;
                if (!m[x]) {
                    m.erase(x);
                    cnt--;
                }
            }
            ans += (r - l + 1);
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }
};