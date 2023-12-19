class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mn1=INT_MAX,mn2=mn1,mx1=INT_MIN,mx2=mx1;
        for(auto it:nums)
        {
            if(mx1<it)
            {
                mx2=mx1;
                mx1=it;
            }
            else if(mx2<it)
                mx2=it;
            if(mn1>it)
            {
                mn2=mn1;
                mn1=it;
            }
            else if(mn2>it)
                mn2=it;
        }
        return (mx1*mx2) - (mn1*mn2);
    }
<<<<<<< HEAD
};
=======
};
>>>>>>> 3740f503cfd77744132fd0bf77c0c607e3f52316
