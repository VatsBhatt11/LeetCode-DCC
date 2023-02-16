class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n1=num.size(),i;
        string s = to_string(k);
        vector<int>v;
        for(auto it:s)
              v.push_back(it-'0');
              int n2=v.size();
              for(i=max(n1,n2)-min(n1,n2);i>0;i--)
              {
                      if(n1<n2)
                                 num.insert(num.begin(),0);
                                         else
                                                    v.insert(v.begin(),0);
                                                    }
                                                    n1=n2=max(n1,n2);
                                                    int c=0;
                                                    vector<int>ans(n1);
                                                    for(i=n1-1;i>=0;i--)
                                                    {
                                                           ans[i]=(num[i]+v[i]+c)%10;
                                                                  c=(num[i]+v[i]+c)/10;
                                                                  }
                                                                  if(c)
                                                                  ans.insert(ans.begin(),c);
                                                                  return ans;
    }
};
