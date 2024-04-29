class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for (auto it : nums)
            x ^= it;
        int ans = 0;
        for (int i = 20; i >= 0; i--) {
            int a = k & (1 << i);
            int b = x & (1 << i);
            ans += (a != b);
        }
        return ans;
    }
};