class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for (auto it : nums)
            ans |= it;
        return ans << (n - 1);
    }
};