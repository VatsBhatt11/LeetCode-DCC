class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it:flights)
            adj[it[0]].push_back({it[1],it[2]});
        vector<int> dist(n,1e9);
        dist[src] = 0;
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        while(!q.empty())
        {
            int step = q.front().first;
            int node = q.front().second.first;
            int dis = q.front().second.second;
            q.pop();
            if(step>k)
                continue;
            for(auto it:adj[node])
            {
                int adjNode = it.first;
                int wt = it.second;
                if(step<=k && dis + wt < dist[adjNode])
                {
                    dist[adjNode] = dis + wt;
                    q.push({step+1,{adjNode,dis+wt}});
                }
            }
        }
        return dist[dst] == 1e9 ? -1 : dist[dst];
    }
};