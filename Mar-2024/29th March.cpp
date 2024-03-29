class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size(), mx = *max_element(nums.begin(), nums.end());
        int l = 0, r = 0;
        while (r < n) {
            k -= (nums[r++] == mx);
            while (!k)
                k += (nums[l++] == mx);
            ans += l;
        }
        return ans;
    }
};