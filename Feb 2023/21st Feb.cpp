class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,u=nums.size()-2,m;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==nums[m^1])
                l++;
            else
                u--;
        }
        return nums[l];
    }
};
