class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        int ans=0;
        for(auto &it:m)
        {
            if(it.second==1)
                return -1;
            ans+=it.second/3;
            if(it.second%3==1 || it.second%3==2)
                ans++;
        }
        return ans;
    }
};