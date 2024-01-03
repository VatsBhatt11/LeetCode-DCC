class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        for(auto it:bank)
        {
            int cnt=0;
            for(auto itr:it)
                cnt+=itr-'0';
            if(cnt)
                v.push_back(cnt);
        }
        int ans=0;
        for(int i=1;i<v.size();i++)
            ans+=v[i]*v[i-1];
        return ans;
    }
};