class Solution {
public:
    int tribonacci(int n) {
        int a,b,c,d;
        a=0;
        b=c=1;
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        while(n>2)
        {
            d=a+b+c;
            a=b;
            b=c;
            c=d;
            n--;
        }
        return d;
    }
};
