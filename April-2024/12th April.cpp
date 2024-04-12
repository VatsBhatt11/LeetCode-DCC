class Solution {
public:
    int trap(vector<int>& height) {
        int lmax = 0, rmax = 0, ans = 0;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            if (height[l] < height[r]) {
                if (lmax < height[l])
                    lmax = height[l];
                ans += lmax - height[l++];
            } else {
                if (rmax < height[r])
                    rmax = height[r];
                ans += rmax - height[r--];
            }
        }
        return ans;
    }
};