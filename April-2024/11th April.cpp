class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        stack<char> st;
        for (auto it : num) {
            while (!st.empty() && k && st.top() > it) {
                st.pop();
                k--;
            }
            if (it - '0' || !st.empty())
                st.push(it);
        }
        while (!st.empty() && k) {
            st.pop();
            k--;
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return (ans == "") ? "0" : ans;
    }
};