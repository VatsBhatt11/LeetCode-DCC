class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long ans = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        int bitmask = 0;
        for (auto it : word) {
            bitmask ^= (1 << (it - 'a'));
            ans += m[bitmask];
            for (int i = 0; i < 10; i++)
                ans += m[bitmask ^ (1 << i)];
            m[bitmask]++;
        }
        return ans;
    }
};