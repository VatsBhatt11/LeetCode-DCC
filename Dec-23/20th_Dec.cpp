class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mn1=INT_MAX,mn2=mn1;
        for(auto it:prices)
        {
            if(mn1 > it)
            {
                mn2 = mn1;
                mn1 = it;
            }
            else if(mn2 > it)
                mn2 = it;
        }
        return mn1+mn2<=money ? money-mn1-mn2 : money;
    }
};