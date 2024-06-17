class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int n = 2; n * n <= c; n++) {
            if (c % n == 0) {
                int cnt = 0;
                while (c % n == 0) {
                    cnt++;
                    c /= n;
                }
                if (n % 4 == 3 && cnt & 1)
                    return false;
            }
        }
        return c % 4 != 3;
    }
};