class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&visited,
    vector<vector<char>>&grid)
    {
        visited[i][j]=1;
        int n=grid.size(),m=grid[0].size();
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        for(int x=0;x<4;x++)
        {
            int r=i+row[x];
            int c=j+col[x];
            if(r>=0 && r<n && c>=0 && c<m && grid[r][c]=='1' 
            && !visited[r][c])
                dfs(r,c,visited,grid);
        }
        return ;
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int r = grid.size(),c = grid[0].size();
        vector<vector<int>>visited(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    ans++;
                    dfs(i,j,visited,grid);
                }
            }
        }
        return ans;
    }
};