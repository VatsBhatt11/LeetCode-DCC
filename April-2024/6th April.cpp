class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans, temp;
        int cnt = 0;
        for (auto it : s) {
            if (it == '(') {
                cnt++;
                temp += it;
            } else if (it == ')') {
                cnt--;
                if (cnt >= 0)
                    temp += it;
                else
                    cnt = 0;
            } else
                temp += it;
        }
        int n = temp.size();
        for (int i = n - 1; i >= 0; i--) {
            if (temp[i] == '(' && cnt)
                cnt--;
            else
                ans += temp[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};