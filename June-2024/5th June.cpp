class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> min_freq(26, INT_MAX);
        for (auto word : words) {
            vector<int> m(26);
            for (auto it : word)
                m[it - 'a']++;
            for (int i = 0; i < 26; i++)
                min_freq[i] = min(min_freq[i], m[i]);
        }
        for (int i = 0; i < 26; i++) {
            while (min_freq[i]--)
                ans.push_back(string(1, 'a' + i));
        }
        return ans;
    }
};