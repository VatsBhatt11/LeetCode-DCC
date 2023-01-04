class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int i,cnt=0;
        map<int,int>m;
        for(i=0;i<tasks.size();i++)
            m[tasks[i]]++;
        for(auto it:m)
        {
            int x=it.first;
            if(m[x]==1)
                return -1;
            cnt+=m[x]/3;
            if(m[x]%3!=0)
                cnt++;
        }
        return cnt;
    }
};
