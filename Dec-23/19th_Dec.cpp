class Solution {
public:
    int helper(int r,int c,vector<vector<int>>&img)
    {
        int sum = 0,cnt=0,row=img.size(),col=img[0].size();
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                int nr = r+i;
                int nc = c+j;
                if(nr>=0 && nr<row && nc>=0 && nc<col)
                    sum+=img[nr][nc],cnt++;
            }
        }
        return sum/cnt;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int r=img.size(),c=img[0].size();
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                ans[i][j] = helper(i,j,img);
        }
        return ans;
    }
};