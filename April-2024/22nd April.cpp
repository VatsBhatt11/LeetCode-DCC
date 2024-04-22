class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int ans = 0;
        queue<string> q;
        unordered_set<string> vis(deadends.begin(), deadends.end());
        if (vis.find("0000") != vis.end())
            return -1;
        unordered_map<char, char> m1 = {{'0', '1'}, {'1', '2'}, {'2', '3'},
                                        {'3', '4'}, {'4', '5'}, {'5', '6'},
                                        {'6', '7'}, {'7', '8'}, {'8', '9'},
                                        {'9', '0'}},
                                  m2 = {{'0', '9'}, {'1', '0'}, {'2', '1'},
                                        {'3', '2'}, {'4', '3'}, {'5', '4'},
                                        {'6', '5'}, {'7', '6'}, {'8', '7'},
                                        {'9', '8'}};
        q.push("0000");
        vis.insert("0000");
        while (!q.empty()) {
            for (int i = q.size(); i > 0; i--) {
                string temp = q.front();
                q.pop();
                if (temp == target)
                    return ans;
                for (int j = 0; j < 4; j++) {
                    string str = temp;
                    str[j] = m1[str[j]];
                    if (vis.find(str) == vis.end()) {
                        vis.insert(str);
                        q.push(str);
                    }
                    str = temp;
                    str[j] = m2[str[j]];
                    if (vis.find(str) == vis.end()) {
                        vis.insert(str);
                        q.push(str);
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};