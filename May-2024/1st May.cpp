class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind, n = word.size();
        for (ind = 0; ind < n; ind++) {
            if (word[ind] == ch)
                break;
        }
        if (ind == n)
            return word;
        reverse(word.begin(), word.begin() + ind + 1);
        return word;
    }
};