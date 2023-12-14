class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int>onesRow(n),onesCol(m),zeroesRow(n),zeroesCol(m);
        for(int i=0;i<n;i++)
        {
            for(auto it:grid[i])
                onesRow[i]+=it;
            zeroesRow[i]=n-onesRow[i];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                onesCol[i]+=grid[j][i];
            zeroesCol[i]=m-onesCol[i];
        }
        vector<vector<int>>dif(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                dif[i][j]=onesRow[i]+onesCol[j]-zeroesRow[i]-zeroesCol[j];
        }
        return dif;
    }
};