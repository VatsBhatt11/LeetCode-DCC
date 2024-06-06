class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> m;
        for (auto it : hand)
            m[it]++;
        while (!m.empty()) {
            int cur = m.begin()->first;
            for (int i = 0; i < groupSize; i++) {
                if (!m[cur + i])
                    return false;
                else if (!--m[cur + i])
                    m.erase(cur + i);
            }
        }
        return true;
    }
};