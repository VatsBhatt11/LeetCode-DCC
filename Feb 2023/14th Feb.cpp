class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int s,x,y,i,c=0,n1,n2,n;
        n1=a.length(),n2=b.length();
        n=max(n1,n2)-min(n1,n2);
        while(n--)
        {
            if(n1<n2)
            a.insert(0,"0");
            else
            b.insert(0,"0");
        }
        if(n1<n2)
        n1=n2;
        else
        n2=n1;
        for(i=n1-1;i>=0;i--)
        {
            x=a[i]-'0';
            y=b[i]-'0';
            s=x+y+c;
            if(s==0)
            {
                ans+="0";
                c=0;
            }
            else if(s==1)
            {
                ans+="1";
                c=0;
            }
            else if(s==2)
            {
                ans+="0";
                c=1;
            }
            else
            {
                ans+="1";
                c=1;
            }
        }
        if(c==1)
        ans+="1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
