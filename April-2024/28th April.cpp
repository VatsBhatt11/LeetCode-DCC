class Solution {
public:
    vector<vector<int>> adj;
    vector<int> count, ans;

    void dfs1(int root, int parent) {
        for (auto it : adj[root]) {
            if (it == parent)
                continue;
            dfs1(it, root);
            count[root] += count[it];
            ans[root] += ans[it] + count[it];
        }
    }

    void dfs2(int root, int parent) {
        for (auto it : adj[root]) {
            if (it == parent)
                continue;
            ans[it] = ans[root] - count[it] + count.size() - count[it];
            dfs2(it, root);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        count.assign(n, 1);
        ans.assign(n, 0);
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        dfs1(0, -1);
        dfs2(0, -1);
        return ans;
    }
};