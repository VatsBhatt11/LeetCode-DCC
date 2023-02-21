class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l,u,m,f;
        l=0;
        u=nums.size()-1;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==target)
                return m;
            if(target<nums[m])
                {
                    u=m-1;
                    f=1;
                }
            else
            {
                l=m+1;
                f=2;
            }
        }
        if(f==1)
            return u+1;
        else
            return l;
    }
};
