class Solution {
public:
    int minOperations(string s) {
        int cnt=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(i&1)
                cnt+=s[i]-'0';
            else
                cnt+=s[i]=='0';
        }
        return min(n-cnt,cnt);
    }
};