class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int n0=0,n1=0,ans=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            n0+=s[i]=='0';
            n1+=s[i]-'0';
            ans=max(ans,n0-n1);
        }
        n1+=s[n-1]-'0';
        return ans+n1;
    }
};