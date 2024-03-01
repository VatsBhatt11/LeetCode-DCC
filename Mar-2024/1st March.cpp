class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans;
        int n=s.size(),c1=0,c0;
        for(auto it:s)
            c1+=it-'0';
        c0=n-c1;
        while(c1>1)
        {
            ans+='1';
            c1--;
        }
        while(c0--)
            ans+='0';
        ans+='1';
        return ans;
    }
};