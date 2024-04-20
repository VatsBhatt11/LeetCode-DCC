class Solution {
public:
    void helper(int i, int j, vector<vector<int>>& vis,
                vector<vector<int>>& land, vector<vector<int>>& ans) {
        vis[i][j] = 1;
        vector<int> v;
        v.push_back(i);
        v.push_back(j);
        queue<pair<int, int>> q;
        q.push({i, j});
        int ind1 = i, ind2 = j, n = land.size(), m = land[0].size();
        vector<int> x = {1, 0, 0, -1}, y = {0, -1, 1, 0};
        while (!q.empty()) {
            int r = q.front().first, c = q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nrow = r + x[k], ncol = c + y[k];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    land[nrow][ncol] && !vis[nrow][ncol]) {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                    ind1 = nrow, ind2 = ncol;
                }
            }
        }
        v.push_back(ind1);
        v.push_back(ind2);
        ans.push_back(v);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size(), m = land[0].size();
        vector<vector<int>> ans, vis(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (land[i][j] && !vis[i][j])
                    helper(i, j, vis, land, ans);
            }
        }
        return ans;
    }
};