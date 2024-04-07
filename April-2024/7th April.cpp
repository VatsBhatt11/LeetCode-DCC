class Solution {
public:
    bool checkValidString(string s) {
        int lmin = 0, lmax = 0;
        for (auto it : s) {
            if (it == '(') {
                lmin++;
                lmax++;
            } else if (it == ')') {
                lmin--;
                lmax--;
            } else {
                lmin--;
                lmax++;
            }
            if (lmax < 0)
                return false;
            if (lmin < 0)
                lmin = 0;
        }
        return lmin == 0;
    }
};