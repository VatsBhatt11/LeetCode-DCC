class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n * (n + 1)) / 2;
        int l = 1, r = n;
        while (l <= r) {
            int m = (l + r) / 2;
            int sl = (m * (m + 1)) / 2;
            int sr = m - 1;
            sr = sum - (sr * (sr + 1)) / 2;
            if (sl == sr)
                return m;
            if (sl < sr)
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }
};