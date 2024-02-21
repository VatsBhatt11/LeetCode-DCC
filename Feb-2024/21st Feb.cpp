class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans = left & right;
        if (!left || left == right)
            return ans;
        int a = log2(left), b = log2(right);
        if (a != b)
            return 0;
        int x = 32 - __builtin_clz(right - left);
        return ans & ~((1 << x) - 1);
    }
};