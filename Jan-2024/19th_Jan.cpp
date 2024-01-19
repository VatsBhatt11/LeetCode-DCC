class Solution {
public:
    int f(int i,int j,int n,vector<vector<int>>v,vector<vector<int>>dp)
    {
        if(j<0 || j>=n)
        return 1e9;
        if(i==n-1)
        return dp[i][j]=v[i][j];
        if(dp[i][j]!=-1)
        return dp[i][j];
        int down,diag1,diag2;
        down=v[i][j]+f(i+1,j,n,v,dp);
        diag1=v[i][j]+f(i+1,j-1,n,v,dp);
        diag2=v[i][j]+f(i+1,j+1,n,v,dp);
        return dp[i][j]=min(down,min(diag1,diag2));
    }

    int minFallingPathSum(vector<vector<int>>& v) {
        int ans=INT_MAX,n=v.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        /*for(int i=0;i<n;i++)
            ans=min(ans,f(0,i,n,v,dp));
        return ans;*/
        for(int i=n-1;i>=0;i--)
        dp[n-1][i]=v[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int down,diag1,diag2;
                down=diag1=diag2=v[i][j];
                down+=dp[i+1][j];
                if(j>0)
                diag1+=dp[i+1][j-1];
                else
                diag1+=1e9;
                if(j<n-1)
                diag2+=dp[i+1][j+1];
                else
                diag2+=1e9;
                dp[i][j]=min(down,min(diag1,diag2));
            }
        }
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        mn=min(mn,dp[0][i]);
        return mn;
    }
};