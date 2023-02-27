class Solution {
public:
    int maxProfit(vector<int>& p) {
        /*if(is_sorted(begin(p),end(p),greater<int>()))
            return 0;*/
        int i,n=p.size(),ans=0,m1=INT_MAX,m2=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(m1>p[i])
            {
                m1=p[i];
                m2=p[i];
            }
            if(m2<p[i])
                m2=p[i];
            ans=max(ans,m2-m1);
        }
        return ans;
    }
};
