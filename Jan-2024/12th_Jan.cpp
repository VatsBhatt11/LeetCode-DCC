class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1 = 0, cnt2 = 0, n = s.size();
        for (int i = 0; i < n / 2; i++) {
            s[i] = tolower(s[i]);
            s[n - i - 1] = tolower(s[n - i - 1]);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
                cnt1++;
            if (s[n - i - 1] == 'a' || s[n - i - 1] == 'e' ||
                s[n - i - 1] == 'i' || s[n - i - 1] == 'o' ||
                s[n - i - 1] == 'u')
                cnt2++;
        }
        return cnt1 == cnt2;
    }
};