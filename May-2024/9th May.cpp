class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        sort(happiness.rbegin(), happiness.rend());
        int i = 0, n = happiness.size();
        while (k && i < n && happiness[i] - i > 0) {
            ans += happiness[i] - (i++);
            k--;
        }
        return ans;
    }
};