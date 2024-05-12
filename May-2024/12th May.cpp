class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int n = grid.size();
        for (int i = 0; i < n - 2; i++) {
            vector<int> v;
            for (int j = 0; j < n - 2; j++) {
                int mx = INT_MIN;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++)
                        mx = max(mx, grid[i + k][j + l]);
                }
                v.push_back(mx);
            }
            ans.push_back(v);
        }
        return ans;
    }
};