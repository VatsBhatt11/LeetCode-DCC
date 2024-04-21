class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<int> adj[n];
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        queue<int> q;
        q.push(source);
        vector<int> vis(n);
        vis[source] = 1;
        while (!q.empty()) {
            int temp = q.front();
            q.pop();
            if (temp == destination)
                return true;
            for (auto it : adj[temp]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return false;
    }
};