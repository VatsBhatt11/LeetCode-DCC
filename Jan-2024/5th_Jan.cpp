class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>temp;
        temp.emplace_back(nums[0]);
        int n=nums.size(),ans=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>temp.back())
            {
                ans++;
                temp.emplace_back(nums[i]);
            }
            else
            {
                int ind=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }
        }
        return ans;
    }
};