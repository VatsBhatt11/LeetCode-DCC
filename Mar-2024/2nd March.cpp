class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int r, n = nums.size(), l = n - 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                l = i - 1;
                break;
            }
        }
        r = l + 1;
        while (l >= 0 && r < n) {
            if (abs(nums[l]) < nums[r]) {
                v.push_back(nums[l] * nums[l]);
                l--;
            } else {
                v.push_back(nums[r] * nums[r]);
                r++;
            }
        }
        while (l >= 0) {
            v.push_back(nums[l] * nums[l]);
            l--;
        }
        while (r < n) {
            v.push_back(nums[r] * nums[r]);
            r++;
        }
        return v;
    }
};