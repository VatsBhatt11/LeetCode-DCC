class Solution {
public:
    int totalMoney(int n) {
        if(n<=7)
            return (n*(n+1))/2;
        int x=4,y=0,z=(n/7);
        for(int i=1;i<=z;i++)
        {
            y+=x;
            x++;
        }
        int ans=y*7,w=n%7;
        w+=z;
        ans+=((w*(w+1))/2) - ((z*(z+1))/2);
        return ans;
    }
};