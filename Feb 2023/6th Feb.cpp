class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int i,j=0;
        for(i=0;i<(2*n);i+=2)
            ans[i]=nums[j++];
        for(i=1;i<(2*n);i+=2)
            ans[i]=nums[j++];
        return ans;
    }
};
