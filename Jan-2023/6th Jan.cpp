class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int i;
        sort(costs.begin(),costs.end());
        int sum=costs[0];
        if(sum>coins)
            return 0;
        for(i=1;i<costs.size();i++)
        {
            sum+=costs[i];
            if(sum>coins)
                return i;
        }
        return i;
    }
};
