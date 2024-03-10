class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto it:nums1)
            m[it]++;
        for(auto it:nums2)
        {
            if(m.count(it))
            {
                ans.push_back(it);
                m.erase(it);
            }
        }
        return ans;
    }
};