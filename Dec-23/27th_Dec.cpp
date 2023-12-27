class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int start=0,end=0,n=colors.size(),ans=0;
        while(end < n)
        {
            int mx=INT_MIN;
            while(end < n && colors[start]==colors[end])
            {
                mx=max(mx,neededTime[end]);
                ans+=neededTime[end];
                end++;
            }
            ans-=mx;
            start=end;
        }
        return ans;
    }
};