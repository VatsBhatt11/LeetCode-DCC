class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt=0,i,j,l;
        l=strs[0].length();
        for(i=0;i<l;i++)
        {
            for(j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]>strs[j+1][i])
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
