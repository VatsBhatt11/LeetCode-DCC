class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        vector<int> x = {1, 0, -1, 0};
        vector<int> y = {0, 1, 0, -1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j]) {
                    for (int k = 0; k < 4; k++) {
                        int ind1 = i + x[k], ind2 = j + y[k];
                        if (ind1 >= 0 && ind1 < n && ind2 >= 0 && ind2 < m)
                            ans += !grid[ind1][ind2];
                        else
                            ans++;
                    }
                }
            }
        }
        return ans;
    }
};