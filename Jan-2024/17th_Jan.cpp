class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int cnt=1;
            while(i<n-1 && arr[i]==arr[i+1])
            {
                i++;
                cnt++;
            }
            v.push_back(cnt);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
                return false;
        }
        return true;
    }
};