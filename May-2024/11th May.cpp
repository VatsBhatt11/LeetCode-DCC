class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage,
                                int k) {
        double ans = DBL_MAX;
        int n = quality.size();
        int sum = 0;
        vector<pair<double, int>> v;
        for (int i = 0; i < n; i++)
            v.push_back({(double)wage[i] / quality[i], quality[i]});
        priority_queue<int> pq;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            double ratio = v[i].first;
            int qua = v[i].second;
            sum += qua;
            pq.push(qua);
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            if (pq.size() == k)
                ans = min(ans, sum * ratio);
        }
        return ans;
    }
};