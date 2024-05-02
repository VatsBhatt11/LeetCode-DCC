class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), left = 0, right = n - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == 0)
                return nums[right];
            else if (sum > 0)
                right--;
            else
                left++;
        }
        return -1;
    }
};