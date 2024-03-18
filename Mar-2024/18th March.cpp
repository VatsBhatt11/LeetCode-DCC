class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        sort(points.begin(), points.end());
        int end = points[0][1], n = points.size();
        for (int i = 1; i < n; i++) {
            if (end < points[i][0]) {
                ans++;
                end = points[i][1];
            }
            end = min(end, points[i][1]);
        }
        return ans;
    }
};