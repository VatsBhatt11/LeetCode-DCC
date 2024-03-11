class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        unordered_map<char, int> m, n;
        for (auto it : s)
            m[it]++;
        for (auto it : order)
            n[it]++;
        for (auto it : order) {
            while(m[it])
            {
                ans+=it;
                m[it]--;
            }
        }
        for (auto it : s) {
            if (n.count(it) == 0)
                ans += it;
        }
        return ans;
    }
};