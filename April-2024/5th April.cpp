class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        stack<char> st;
        for (auto it : s) {
            if(!st.empty() && abs(st.top()-it)==32)
                st.pop();
            else
                st.push(it);
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};