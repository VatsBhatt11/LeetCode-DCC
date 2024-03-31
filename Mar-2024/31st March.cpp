class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int mni = -1, mxi = -1, badi = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minK || nums[i] > maxK)
                badi = i;
            if (nums[i] == minK)
                mni = i;
            if (nums[i] == maxK)
                mxi = i;
            ans += max(0, min(mni, mxi) - badi);
        }
        return ans;
    }
};