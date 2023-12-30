class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>v(26);
        int n = words.size();
        for(auto it:words)
        {
            for(auto itr:it)
                v[itr-'a']++;
        }
        for(auto it:v)
        {
            if(it%n)
                return false;
        }
        return true;
    }
};