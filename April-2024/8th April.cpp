class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n1 = 0, n0 = 0, n = students.size();
        for (auto it : students)
            it ? n1++ : n0++;
        for (int i = 0; i < n; i++) {
            if (sandwiches[i]) {
                if (n1)
                    n1--;
                else
                    return n - i;
            } else {
                if (n0)
                    n0--;
                else
                    return n - i;
            }
        }
        return 0;
    }
};