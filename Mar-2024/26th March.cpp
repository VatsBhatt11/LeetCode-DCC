class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (auto& it : nums) {
            if (it < 0)
                it = 0;
        }
        for (auto it : nums) {
            int x = abs(it);
            if (x >= 1 && x <= n) {
                if (nums[x - 1] > 0)
                    nums[x - 1] *= -1;
                else if (nums[x - 1] == 0)
                    nums[x - 1] -= (n + 1);
            }
        }
        for (int i = 1; i <= n; i++) {
            if (nums[i - 1] >= 0)
                return i;
        }
        return n + 1;
    }
};