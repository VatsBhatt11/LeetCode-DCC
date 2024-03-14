class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0, ans = 0;
        unordered_map<int, int> m;
        for (auto it : nums) {
            sum += it;
            if (sum == goal)
                ans++;
            int rem = sum - goal;
            if (m.count(rem))
                ans += m[rem];
            m[sum]++;
        }

        return ans;
    }
};